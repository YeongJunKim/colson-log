cmake_minimum_required(VERSION 3.5.0)

project(thread)

set(CMAKE_CXX_STANDARD 17)

set(${PROJECT_NAME}_sources
    main.cpp
    )

add_executable(${PROJECT_NAME}_main ${${PROJECT_NAME}_sources})