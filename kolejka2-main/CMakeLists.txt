cmake_minimum_required(VERSION 3.27)
project(kolejka2)

set(CMAKE_CXX_STANDARD 17)

add_executable(kolejka2 main.cpp
        queue.cpp
        queue.h)
