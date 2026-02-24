cmake_minimum_required(VERSION 3.28)

project(adrift LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(ExternalProject)

ExternalProject_Add(
    wlroots
    PREFIX ${CMAKE_BINARY_DIR}/external
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/external/wlroots
    CONFIGURE_COMMAND meson setup build
    BUILD_COMMAND meson compile -C build
    INSTALL_COMMAND ""
    BUILD_BYPRODUCTS ${CMAKE_SOURCE_DIR}/external/wlroots/build/libwlroots.a
)

add_executable(adrift
    src/main.c
    src/camera.c
)
target_include_directories(adrift PRIVATE include ${CMAKE_SOURCE_DIR}/external/wlroots/build/include)
add_dependencies(adrift wlroots)
target_link_libraries(adrift PRIVATE ${CMAKE_SOURCE_DIR}/external/wlroots/build/libwlroots.a)
