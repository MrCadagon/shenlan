cmake_minimum_required(VERSION 3.0)

project(hw1)


# 添加Eigen头文件
include_directories( "/usr/include/eigen3" )

add_executable(hw1 main.cpp)

install(TARGETS hw1 RUNTIME DESTINATION bin)
