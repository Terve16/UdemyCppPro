# 0.) Create code and CMake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. (generate build files (for example Makefiles), build directory cd ..)
# 4a.) cmake --build . (Compile all targets)
# 4b.) make (alternative way in case of make files)

cmake_minimum_required(VERSION 3.18.4)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_executable(MyProgram main.cc)
