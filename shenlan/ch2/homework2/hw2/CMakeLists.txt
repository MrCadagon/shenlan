cmake_minimum_required(VERSION 3.0)

project(hw2)

include_directories("/usr/include/eigen3")

add_executable(hw2 main.cpp)

add_executable(hw22 main2.cpp)

install(TARGETS hw2 RUNTIME DESTINATION bin)
