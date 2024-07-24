cmake_minimum_required(VERSION 3.6)

project(mathtest)

enable_testing()


add_executable(mathtest test.cpp)



target_link_libraries(mathtest GTest::gtest_main mathlib)

include (GoogleTest)
gtest_discover_tests(mathtest)
gtest_add_tests(TARGET mathtest SOURCES test.cpp)