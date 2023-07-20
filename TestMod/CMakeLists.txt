cmake_minimum_required(VERSION 3.18)

set(TARGET TestMod)
project(${TARGET})

set(${TARGET}OutputDir ${CMAKE_SOURCE_DIR}/Output/${TARGET})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${${TARGET}OutputDir})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${${TARGET}OutputDir})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${TARGET}OutputDir})

FILE(GLOB_RECURSE ${TARGET}_HEADERS "*.hpp")
FILE(GLOB_RECURSE ${TARGET}_SOURCES "*.cpp")

add_library(${TARGET} SHARED ${${TARGET}_HEADERS} ${${TARGET}_SOURCES})

set_target_properties(${TARGET} PROPERTIES OUTPUT_NAME main)

target_include_directories(${TARGET} PUBLIC .)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3 UEUtils)