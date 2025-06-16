cmake_minimum_required(VERSION 3.30)
project(koo)

set(CMAKE_CXX_STANDARD 20)

add_executable(koo main.cpp
        kolo.cpp
        kolo.h)
