cmake_minimum_required(VERSION 4.1)

project(FooProject)

add_executable(foo main.cpp src/foo.cpp)
target_include_directories(foo PRIVATE src)
