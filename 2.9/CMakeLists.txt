cmake_minimum_required(VERSION 3.16)

project(hw2_9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(hw2_9  hw2.9.1.cpp
    nod.h
    nod.cpp
    hw2.9.2.cpp
    Nod_2.h
    Nod_2.cpp
    fraction_2.h fraction_2.cpp)

include(GNUInstallDirs)
install(TARGETS hw2_9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
