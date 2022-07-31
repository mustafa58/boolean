cmake_minimum_required(VERSION 3.23)
project(boolean C)

set(CMAKE_C_STANDARD 99)

add_executable(boolean main.c bool.h types.h)
