cmake_minimum_required(VERSION 3.23)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2 main.cpp Personnel.cpp Personnel.h OfficeStaff.cpp OfficeStaff.h ProductionStaff.cpp ProductionStaff.h Company.cpp Company.h)
