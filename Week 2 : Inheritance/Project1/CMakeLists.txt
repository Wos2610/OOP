cmake_minimum_required(VERSION 3.23)
project(Project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project1 main.cpp Officer.cpp Officer.h Worker.cpp Worker.h Engineer.cpp Engineer.h Guard.cpp Guard.h officerManage.cpp officerManage.h)
