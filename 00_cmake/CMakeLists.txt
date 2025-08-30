cmake_minimum_required(VERSION 4.1)
project(libProject)

# Include pour la bibliothèque
target_include_directories(matplot PUBLIC matplotplusplus/source)

# Déclare l'exécutable
add_executable(foo main.cpp)

