cmake_minimum_required(VERSION 3.29)
project(Training_ C)

set(CMAKE_C_STANDARD 11)

add_executable(Training_ main.c
        cell.c
        cell.h
        "node .c"
        "node .h"
        queue.c
        queue.h
        list.c
        list.h
)
