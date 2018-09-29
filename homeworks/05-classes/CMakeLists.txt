cmake_minimum_required (VERSION 3.8)
project(tic_tac_toe_library)

add_library(tic_tac_toe_library "tic_tac_toe.cpp" "tic_tac_toe.h")
add_executable(tic_tac_toe_exe "main.cpp" "tic_tac_toe.cpp")