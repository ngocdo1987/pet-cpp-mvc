# Libs
- [cpp-httplib](https://github.com/yhirose/cpp-httplib)
- [inja](https://github.com/pantor/inja)
- libmysqlcppconn-dev (sudo apt-get install libmysqlcppconn-dev)
- [faker-cxx](https://github.com/cieslarmichal/faker-cxx)
## Paths for checking C++ lib installed
- /usr/include
- /usr/local/include
# DB connect guide
- Install MySQL C++ Connector
```bash
sudo apt-get update
sudo apt-get install libmysqlcppconn-dev
```
# Build & Run
```bash
git clone git@github.com:ngocdo1987/pet-cpp-mvc.git
cd pet-cpp-mvc
mkdir build
cd build
cmake ..
make
./pet_cpp_mvc
```