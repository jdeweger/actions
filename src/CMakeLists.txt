cmake_minimum_required(VERSION 3.6)

project(helloworld)


add_subdirectory(lib)

target_include_directories(mathlib PRIVATE include)
target_include_directories(mathlib PRIVATE lib)


add_executable(helloworld main.cpp)



target_link_libraries(helloworld mathlib)



add_subdirectory(test)