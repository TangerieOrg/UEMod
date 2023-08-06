include(${CMAKE_CURRENT_SOURCE_DIR}/XRepoSetup.cmake)

set(TANGERIE_DLLS_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output/MyMods)

add_subdirectory(Kellog)
add_subdirectory(UEUtils)


add_subdirectory(UEMod)