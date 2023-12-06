cmake_minimum_required(VERSION 3.5)
project(HelloSoft
        VERSION 0.0.1
        LANGUAGES CXX)    
add_executable(HelloSoftBinary main.cpp)
target_compile_features(HelloSoftBinary PRIVATE cxx_std_20)