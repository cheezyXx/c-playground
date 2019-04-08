cmake_minimum_required(VERSION 3.13)
project(cookbookC C)

set(CMAKE_C_STANDARD 11)

add_executable(cookbookC main.c count_chacters/count_characters.c count_chacters/count_characters.h)