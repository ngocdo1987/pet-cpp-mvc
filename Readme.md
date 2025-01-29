# Libs
- [cpp-httplib](https://github.com/yhirose/cpp-httplib)
- [inja](https://github.com/pantor/inja)
- libmysqlcppconn-dev (sudo apt-get install libmysqlcppconn-dev)
- [TinyORM](https://github.com/silverqx/TinyORM)
- [faker-cxx](https://github.com/cieslarmichal/faker-cxx)
- [cpp-dotenv](https://github.com/adeharo9/cpp-dotenv)
- [CLI11](https://github.com/CLIUtils/CLI11)
- [jwt-cpp](https://github.com/Thalhammer/jwt-cpp)
- [Session + Cookie](https://cgi.sourceforge.net/docs/fastcgi___cgi/examples/cgi_examples.html#fastcgi___cgi.examples.cgi_examples.sessions)
- [cpp-validator](https://github.com/evgeniums/cpp-validator)
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