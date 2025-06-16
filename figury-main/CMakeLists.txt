cmake_minimum_required(VERSION 3.30)
project(polimorfizm)

set(CMAKE_CXX_STANDARD 17)

add_executable(polimorfizm main.cpp
        figure.cpp
        figure.h
        rectangle.cpp
        rectangle.h
        square.cpp
        square.h
        circle.cpp
        circle.h
        triangle.cpp
        triangle.h)
