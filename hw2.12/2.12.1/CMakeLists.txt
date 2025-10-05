cmake_minimum_required(VERSION 3.16)

project(hw2_12_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hw2_12_1 main.cpp extended_array.h)

include(GNUInstallDirs)
install(TARGETS hw2_12_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
