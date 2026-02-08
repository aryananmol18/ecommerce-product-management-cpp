# CMakeLists.txt for ecommerce-product-management-cpp project

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ecommerce-product-management)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
    src/main.cpp
    # Add other source files here
)

# Add the executable target
add_executable(ecommerce-product-management ${SOURCES})
