cmake_minimum_required(VERSION 3.23)
project(zxc C)

set(CMAKE_C_STANDARD 11)

add_executable(zxc
        main.c readline.c readline.h)
