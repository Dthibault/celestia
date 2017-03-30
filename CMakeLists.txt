cmake_minimum_required(VERSION 2.8)

project(libCelestia CXX)

set(CXX_STANDARD 14)
set(CXX_STANDARD_REQUIRED ON)

add_library(celestia celestia.cpp)
