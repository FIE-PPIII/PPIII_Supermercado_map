cmake_minimum_required(VERSION 3.21)
project(base_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_cpp main.cpp Supermercado.cpp Supermercado.h Articulo.cpp Articulo.h Caja.cpp Caja.h ArticuloVenta.cpp ArticuloVenta.h Venta.cpp Venta.h FechaActual.cpp FechaActual.h)
