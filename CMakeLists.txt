cmake_minimum_required(VERSION 2.6)
project(Operator_in)

# define the project
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

## Target
set(SOURCES 
		main.cpp
)
set(HEADERS 	
		decorators.hpp
)

add_executable(Operator_in ${SOURCES} ${HEADERS})
