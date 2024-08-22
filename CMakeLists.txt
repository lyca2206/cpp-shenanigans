cmake_minimum_required(VERSION 3.5.0)
project(cpp-shenanigans VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cpp-shenanigans main2.cpp)
add_library(my_class oop_experiment/my_class.cpp oop_experiment/my_class.h)
target_link_libraries(cpp-shenanigans my_class)