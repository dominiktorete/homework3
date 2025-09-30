cmake_minimum_required(VERSION 3.16)

project(kursovaya_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kursovaya_2 main.cpp)
set (SOURCES
  ground.cpp
  sky.cpp
  camel.cpp
  camel_fast.cpp
  centawr.cpp
  boots.cpp
  carpet.cpp
  eagle.cpp
  broom.cpp
  groundrace.cpp
  airrace.cpp
  airgroundrace.cpp
)
set (HEADERS
  lib_global.h
  ground.h
  sky.h
  camel.h
  camel_fast.h
  centawr.h
  boots.h
  carpet.h
  eagle.h
  broom.h
  groundrace.h
  airrace.h
  airgroundrace.h
)
add_library(lib SHARED
  ${SOURCES}
  ${HEADERS}
)
include(GNUInstallDirs)
install(TARGETS kursovaya_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
TARGET_LINK_LIBRARIES(kursovaya_2 lib)
