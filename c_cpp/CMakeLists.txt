cmake_minimum_required(VERSION 3.5.0)

project(c_cpp_examples)

include_directories(./utilities/printer/)

add_subdirectory("utilities")
add_subdirectory("impl")
add_subdirectory("thread")
add_subdirectory("thread syncronization")
add_subdirectory("class template")
add_subdirectory("extern C")
add_subdirectory("operator overloading")
add_subdirectory("pretty cout")
add_subdirectory("smart pointer")
add_subdirectory("uniform initialization")
add_subdirectory("casting")
add_subdirectory("string_and_string_view")
add_subdirectory("enum_class")