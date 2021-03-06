cmake_minimum_required(VERSION 3.16)

project(gtests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# adding the Google_Tests_run target
add_executable(gtests sqrTests.cpp)

target_link_libraries(gtests gtest gtest_main)
