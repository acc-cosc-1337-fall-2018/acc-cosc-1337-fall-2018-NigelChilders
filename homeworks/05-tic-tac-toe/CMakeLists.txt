cmake_minimum_required (VERSION 3.8)
project(tictactoe_library)

add_library(tictactoe_library "tictactoe.cpp" "tictactoe.h")
add_executable(tictactoe_exe "main.cpp" "tictactoe.cpp")