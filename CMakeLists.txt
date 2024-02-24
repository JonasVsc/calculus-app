cmake_minimum_required(VERSION 3.28.0)
project(calculus-app)

set(EXECUTABLE_OUTPUT_PATH ../build)


add_executable(calculus-app src/main.cpp
        src/calculus.h
        src/calculus.cpp)