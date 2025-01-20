cmake_minimum_required(VERSION 3.30)
project(learn_c C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(src)

add_executable(learn_c
    src/datatype.c
    src/main.c
)
