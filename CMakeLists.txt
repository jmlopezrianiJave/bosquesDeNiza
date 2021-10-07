cmake_minimum_required(VERSION 3.20)
project(bosquesDeNiza)

set(CMAKE_CXX_STANDARD 14)

add_executable(bosquesDeNiza main.cpp Propietario.h Propietario.cpp Fundador.cpp Fundador.h Reventa.cpp Reventa.h Propiedad.cpp Propiedad.h Administracion.cpp Administracion.h)
