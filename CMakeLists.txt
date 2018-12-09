cmake_minimum_required (VERSION 2.6)
project (GNUTest)
SET (CMAKE_C_FLAGS "-pedantic -ansi -D_GNU_SOURCE")
add_executable(GNUTest test.c)

