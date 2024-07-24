cmake_minimum_required(VERSION 3.6)

project(helloworld)


add_subdirectory(lib)

target_include_directories(addlib PRIVATE include)
target_include_directories(addlib PRIVATE lib)


add_executable(helloworld main.cpp)



target_link_libraries(helloworld addlib)



add_subdirectory(test)