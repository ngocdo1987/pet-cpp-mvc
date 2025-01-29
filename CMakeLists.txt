cmake_minimum_required(VERSION 3.10)
project(PetCppMvc)

set(CMAKE_CXX_STANDARD 17)

# Include the project's include directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add executable
add_executable(pet_cpp_mvc src/main.cpp)
