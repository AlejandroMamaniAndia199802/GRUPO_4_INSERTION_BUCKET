cmake_minimum_required(VERSION 3.13.4)
project(RADIX_SORT_GRUPO_4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -pthread)



add_executable(RADIX_SORT_GRUPO_4 INSERT.cpp INSERT.h BUCKET.cpp BUCKET.h)