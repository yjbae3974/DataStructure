cmake_minimum_required(VERSION 3.21)
project(Array C)

set(CMAKE_C_STANDARD 99)

add_executable(Array getNum.c minmax.c dynamicalloc.c twodimension.c 10950.c dynamic.c test.c)

add_executable(minmax minmax.c)
add_executable(dynamicalloc dynamicalloc.c)
add_executable(twodimension twodimension.c)
add_executable(10950 10950.c)
add_executable(dynamic dynamic.c)
add_executable(test test.c)
add_executable(2ndWeek_2576 2ndWeek/2576.c)
add_executable(2ndWeek_search 2ndWeek/search.c)
add_executable(3rdWeek_1158 3rdWeek/1158.c)
add_executable(3rdWeek_2164 3rdWeek/2164.c)