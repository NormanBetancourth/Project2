cmake_minimum_required(VERSION 3.17)
project(project2)

set(CMAKE_CXX_STANDARD 20)

add_executable(project2 main.cpp Patient.cpp Patient.h Disease.cpp Disease.h ArrayTemplate.cpp ArrayTemplate.h)