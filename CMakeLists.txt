cmake_minimum_required(VERSION 2.8.4)
project(c7t9)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(c7t9 ${SOURCE_FILES})