cmake_minimum_required(VERSION 3.21)
project(Array C)

set(CMAKE_C_STANDARD 99)

add_executable(Array getNum.c minmax.c dynamicalloc.c twodimension.c 10950.c)

add_executable(minmax minmax.c)
add_executable(dynamicalloc dynamicalloc.c)
add_executable(twodimension twodimension.c)
add_executable(10950 10950.c)