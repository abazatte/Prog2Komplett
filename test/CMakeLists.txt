cmake_minimum_required(VERSION 3.19)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(test main.cpp Rechteck.cpp Rechteck.h Punkt2D.cpp Punkt2D.h GeoObjekt.cpp GeoObjekt.h MetrikVerhalten.h Punkt.h Kreis.cpp Kreis.h Quader.cpp Quader.h Punkt3D.cpp Punkt3D.h Ball.cpp Ball.h OperandenPassenNicht.h Metrik2D.cpp Metrik2D.h Metrik3D.cpp Metrik3D.h)