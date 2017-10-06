cmake_minimum_required(VERSION 3.8)
project(grafoMatriz)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Grafo.cpp Grafo.h)
add_executable(grafoMatriz ${SOURCE_FILES})