cmake_minimum_required(VERSION 4.2.0)

project(adrift LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(adrift src/main.c)
target_include_directories(adrift PRIVATE include)