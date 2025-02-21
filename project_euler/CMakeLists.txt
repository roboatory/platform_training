cmake_minimum_required(VERSION 3.30)
project(project_euler)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(project_euler main.cpp
        problems/problem001.cpp
        problems/problem002.cpp
        problems/problem003.cpp
        problems/problem004.cpp
        problems/problem005.cpp
        problems/problem006.cpp
        problems/problem007.cpp
        problems/problem008.cpp
        problems/problem010.cpp
        src/helpers.cpp)