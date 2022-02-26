cmake_minimum_required(VERSION 3.5.0)

project(thread)

set(CMAKE_CXX_STANDARD 17)

set(${PROJECT_NAME}_sources
    ex1.cpp
    )

add_executable(${PROJECT_NAME}_ex1 ${${PROJECT_NAME}_sources})

add_executable(${PROJECT_NAME}_ex2 ex2.cpp)
add_executable(${PROJECT_NAME}_ex3 ex3.cpp)