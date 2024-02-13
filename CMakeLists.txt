cmake_minimum_required(VERSION 3.16.3)

project(hello-world-singleton LANGUAGES CXX)

add_compile_options(-Wall -Wextra -Werror -Wconversion -pedantic)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory("${PROJECT_SOURCE_DIR}/src")

target_include_directories(hello-world-singleton PUBLIC "${PROJECT_SOURCE_DIR}/include")
