cmake_minimum_required(VERSION 3.5)

project(ShapeCmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (SOURCES
   hw2.10.2.cpp
   parallelogram.cpp
   quadrangle.cpp
   rectangle.cpp
   shape.cpp
   square.cpp
   romb.cpp
   triangle.cpp
   triangleequal.cpp
   triangleisos.cpp
   trianglerect.cpp
)

set (HEADERS
   parallelogram.h
   quadrangle.h
   rectangle.h
   romb.h
   shape.h
   square.h
   triangle.h
   triangleequal.h
   triangleisos.h
   trianglerect.h
)

add_executable(ShapeCmake ${SOURCES} ${HEADERS})

include(GNUInstallDirs)
install(TARGETS ShapeCmake
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
