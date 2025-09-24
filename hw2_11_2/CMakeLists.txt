cmake_minimum_required(VERSION 3.16)

project(hw2_11_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(hw2_11_2 main.cpp)

add_library(Leaver SHARED leaver.cpp leaver.h Leaver_global.h)
include(GNUInstallDirs)
install(TARGETS hw2_11_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
TARGET_LINK_LIBRARIES(hw2_11_2 Leaver)
