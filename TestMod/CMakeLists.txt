cmake_minimum_required(VERSION 3.18)

set(TARGET TestMod)
project(${TARGET})

FILE(GLOB_RECURSE ${TARGET}_HEADERS "src/*.hpp")
FILE(GLOB_RECURSE ${TARGET}_SOURCES "src/*.cpp")

add_library(${TARGET} SHARED ${${TARGET}_HEADERS} ${${TARGET}_SOURCES})

set_target_properties(
	${TARGET} PROPERTIES 
	OUTPUT_NAME TestMod
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output/${TARGET}
)

target_include_directories(${TARGET} PUBLIC src)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3 UEUtils)

set(TARGET TestModLoader)
project(${TARGET})

add_library(${TARGET} SHARED dllmain.cpp)

set_target_properties(
	${TARGET} PROPERTIES 
	OUTPUT_NAME main
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output/TestMod
)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3)