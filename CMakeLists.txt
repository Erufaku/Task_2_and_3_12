# CMakeList.txt: проект CMake для task2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project (task2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -fopenmp")

add_executable(task2 main.cpp cstring.cpp cstring.hpp cstring0.cpp cstring0.hpp cstring1.cpp cstring1.hpp autotest.cpp autotest.hpp Factory.h)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
