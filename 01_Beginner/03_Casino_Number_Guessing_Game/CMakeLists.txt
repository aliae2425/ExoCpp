cmake_minimum_required(VERSION 3.10)
project(Casino)

add_library(Roulette src/Roulette.cpp)

add_executable(Casino roulette.cpp)
target_link_libraries(Casino PRIVATE Roulette)
target_include_directories(Casino PRIVATE src)