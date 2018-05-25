cmake_minimum_required(VERSION 3.0)

project(Template)

# build source
file(GLOB_RECURSE sources src/*.cpp src/*.h)
add_executable(Template ${sources})

