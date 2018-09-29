cmake_minimum_required (VERSION 3.8)
project(vectors_library)

add_library(vectors_library "vectors.cpp" "vectors.h")
add_executable(vectors_exe "main.cpp" "vectors.cpp")