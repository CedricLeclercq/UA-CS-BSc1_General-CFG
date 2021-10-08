cmake_minimum_required(VERSION 3.20)
project(General_CFG)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(General_CFG
        CFG.cpp
        CFG.h
        main.cpp)
