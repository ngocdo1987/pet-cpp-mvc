# Libs
- [cpp-httplib](https://github.com/yhirose/cpp-httplib)
- [inja](https://github.com/pantor/inja)
# DB connect guide
- Install MySQL C Connector
```bash
sudo apt-get update
sudo apt-get install libmysqlcppconn-dev
```
- Add the MySQL Connector/C++ library to your CMakeLists.txt
```bash
# Find MySQL Connector/C++
find_package(MySQL REQUIRED)

# Link MySQL Connector/C++
target_link_libraries(pet_cpp_mvc PRIVATE MySQL::MySQL)
```
# Build & Run
```bash
g++ -std=c++17 -o pet_cpp_mvc main.cpp -lhttplib
./pet_cpp_mvc
```