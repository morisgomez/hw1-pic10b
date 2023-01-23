cmake_minimum_required(VERSION 3.23)
project(10b_hw1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(10b_hw1
        findnum.cpp
        findnum.h
        findnum_main.cpp)
