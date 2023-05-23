cmake_minimum_required(VERSION 3.2.1)
project(strategy)

add_executable(${PROJECT_NAME} main.cpp character.cpp attachbehaviour.cpp )
target_include_directories(${PROJECT_NAME} PUBLIC ./)