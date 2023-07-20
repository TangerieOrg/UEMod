cmake_minimum_required(VERSION 3.18)

set(TARGET UEUtils)
project(${TARGET})

FILE(GLOB_RECURSE ${TARGET}_HEADERS "UEUtils/*.hpp")
FILE(GLOB_RECURSE ${TARGET}_SOURCES "UEUtils/*.cpp")

add_library(${TARGET} STATIC ${${TARGET}_HEADERS} ${${TARGET}_SOURCES})

target_include_directories(${TARGET} PUBLIC .)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3)