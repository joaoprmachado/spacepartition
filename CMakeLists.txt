cmake_minimum_required(VERSION 3.9)
project(CodeSample VERSION 0.0.1
        DESCRIPTION "João Machado Space Partition, intro 1"
        LANGUAGES CXX)

if (MSVC)
  add_compile_optins(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(SpacePartition main.cpp)
target_compile_features(SpacePartition PRIVATE cxx_lambda_init_captures)
