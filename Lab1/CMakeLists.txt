cmake_minimum_required(VERSION 3.7)
project(Lab1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp IShape.h AbstractShape.h Circle.cpp Circle.h ShapesContainer.cpp ShapesContainer.h AbstractShape.cpp Rectangle.cpp Rectangle.h Triangle.cpp Triangle.h IOManager.cpp IOManager.h CommandHandler.cpp CommandHandler.h)
add_executable(Lab1 ${SOURCE_FILES})