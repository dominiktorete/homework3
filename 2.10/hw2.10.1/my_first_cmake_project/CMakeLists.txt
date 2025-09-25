cmake_minimum_required(VERSION 3.5)

project(my_first_cmake_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(my_first_cmake_project my_first_cmake_program.cpp)

include(GNUInstallDirs)
install(TARGETS my_first_cmake_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
