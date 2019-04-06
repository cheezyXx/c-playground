cmake_minimum_required(VERSION 3.13)
project(cookbookC C)

set(CMAKE_C_STANDARD 11)

add_executable(cookbookC main.c palindrome/palindrome.c palindrome/palindrome.h repeated_occurence/repeated_occurrence.c repeated_occurence/repeated_occurrence.h)