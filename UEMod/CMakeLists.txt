cmake_minimum_required(VERSION 3.18)

set(TARGET UEMod)
project(${TARGET})

FILE(GLOB_RECURSE ${TARGET}_HEADERS "src/*.hpp")
FILE(GLOB_RECURSE ${TARGET}_SOURCES "src/*.cpp")

add_library(${TARGET} SHARED ${${TARGET}_HEADERS} ${${TARGET}_SOURCES})

set_target_properties(
	${TARGET} PROPERTIES 
	OUTPUT_NAME main
	RUNTIME_OUTPUT_DIRECTORY ${TANGERIE_DLLS_OUTPUT_DIRECTORY}
)

target_include_directories(${TARGET} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries(${TARGET} PUBLIC ue4ss Kellog UEUtils)
#target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3)

