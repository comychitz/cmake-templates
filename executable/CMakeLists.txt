cmake_minimum_required(VERSION 3.0)

project(Template)

enable_testing()

set(COMMON_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/src/common")

# add sub directories
add_subdirectory(src/common)
add_subdirectory(src/exe)

