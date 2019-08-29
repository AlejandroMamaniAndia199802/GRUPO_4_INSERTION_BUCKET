cmake_minimum_required(VERSION 3.13.4)
project(GRUPO_4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -pthread)



add_executable(GRUPO_4 catch.hpp INSERT.cpp INSERT.h BUCKET.cpp BUCKET.h main-test.cpp)