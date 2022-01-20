cmake_minimum_required(VERSION 3.19)
project(GeoObjekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(GeoObjekt main.cpp Punkt.h GeoObjekt.h Punkt2D.h Rechteck.h Punkt3D.h MetrikVerhalten.h Metrik2D.h Metrik3D.h Kreis.h Ball.h Quader.h Rechteck.cpp Punkt2D.cpp)