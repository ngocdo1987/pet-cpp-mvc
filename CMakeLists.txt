cmake_minimum_required(VERSION 3.10)
project(PetCppMvc)

set(CMAKE_CXX_STANDARD 17)

# Find MySQL Connector/C++
find_package(MySQL REQUIRED)

include_directories(${MYSQL_INCLUDE_DIRS})

# Include the project's include directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add executable
add_executable(pet_cpp_mvc src/main.cpp)

target_link_libraries(pet_cpp_mvc ${MYSQL_LIBRARIES})
