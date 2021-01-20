cmake_minimum_required(VERSION 3.14)

set( CMAKE_BUILD_TYPE "Release" )

PROJECT(SAYHELLO11)

#aux_source_directory(. DIR_SRCS)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/src)
ADD_SUBDIRECTORY(src include)

#INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)


#LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/src)

ADD_EXECUTABLE(sayhello useHello.cpp)
TARGET_LINK_LIBRARIES(sayhello hello)


#ADD_EXECUTABLE(sayhello useHello.c include/hello.h src/hello.cpp)

