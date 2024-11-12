cmake_minimum_required(VERSION 3.29)
project(multiarray)

set(CMAKE_CXX_STANDARD 14)

add_executable(multiarray
    multiarray.cpp)
add_executable(array2 cmake-build-debug/arary2.cpp)

add_executable(arrays5 arrays5.cpp)
