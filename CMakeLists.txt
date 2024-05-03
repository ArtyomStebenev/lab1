cmake_minimum_required(VERSION 3.12)
project(LAB1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(arabicdigits SHARED arabic_digits_counter.cpp)
add_library(libs::arabicdigits ALIAS arabicdigits)   #ALIAS need to check name of lib
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libs::arabicdigits)









