cmake_minimum_required(VERSION 3.0)

project(Template-Cmake)

# build source
file(GLOB_RECURSE sources src/*.cpp src/*.h)
add_executable(Template-Cmake ${sources})

# unit tests using cxxtest
enable_testing()
file(GLOB_RECURSE test_sources src/test/*.h)
add_executable(unit_test ${test_sources})
add_test(unit_tests unit_test)

