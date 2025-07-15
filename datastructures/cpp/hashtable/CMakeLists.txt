cmake_minimum_required(VERSION 3.31)
project(hashtable)

set(CMAKE_CXX_STANDARD 20)

add_executable(hashtable main.cpp
        node.cpp
        node.h
        hashtable.cpp
        hashtable.h)
