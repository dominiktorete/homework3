cmake_minimum_required(VERSION 3.5)

project(ShapeCmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(ShapeCmake hw2.10.2.cpp
    parallelogram.cpp parallelogram.h quadrangle.cpp quadrangle.h
    rectangle.cpp rectangle.h romb.cpp romb.h shape.cpp shape.h
    square.cpp square.h triangle.cpp triangle.h triangleequal.cpp
    triangleequal.h triangleisos.cpp triangleisos.h
    trianglerect.cpp trianglerect.h
)

include(GNUInstallDirs)
install(TARGETS ShapeCmake
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
