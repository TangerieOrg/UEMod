cmake_minimum_required(VERSION 3.18)

set(TARGET TestMod)
project(${TARGET})

set(TestModOutputDir ${CMAKE_SOURCE_DIR}/Output/${TARGET})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${TestModOutputDir})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${TestModOutputDir})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${TestModOutputDir})
add_library(${TARGET} SHARED "main.cpp" "Util/Kismet.cpp" "Util/Extensions.cpp")

set_target_properties(${TARGET} PROPERTIES OUTPUT_NAME main)


target_include_directories(${TARGET} PRIVATE .)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3)