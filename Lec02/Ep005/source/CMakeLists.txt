cmake_minimum_required(VERSION 3.5)
project(MultiFiles 
        VERSION 0.0.2
        LANGUAGES CXX)
# Target
add_executable(MultiFilesBinary main.cpp 
                                src/dog.cpp
                                src/operations.cpp) # all source files after main.cpp
target_compile_features(MultiFilesBinary PRIVATE cxx_std_20) # for passing c++ standard here it is c++20
target_include_directories(MultiFilesBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include) # ${CMAKE_CURRENT_SOURCE_DIR} is directory in which CMakeLists.txt is residing