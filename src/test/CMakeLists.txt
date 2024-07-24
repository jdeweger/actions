cmake_minimum_required(VERSION 3.6)

project(test)

enable_testing()


add_executable(test test.cpp)



target_link_libraries(test GTest::gtest_main mathlib)

include (GoogleTest)
gtest_discover_tests(test)