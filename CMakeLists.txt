cmake_minimum_required(VERSION 3.12)

project(lp LANGUAGES C)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic")

configure_file(vyroba.lp vyroba.lp COPYONLY)


add_executable(prg
main.c
list.c
matrix.c
parser.c
stack.c
)