cmake_minimum_required(VERSION 3.18)
include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

set(TARGET Kellog)
project(${TARGET})

FILE(GLOB_RECURSE ${TARGET}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Kellog/*.hpp")
FILE(GLOB_RECURSE ${TARGET}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Kellog/*.cpp")

add_library(${TARGET} STATIC ${${TARGET}_HEADERS} ${${TARGET}_SOURCES})

target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET} PUBLIC ue4ss nlohmann_json::nlohmann_json)