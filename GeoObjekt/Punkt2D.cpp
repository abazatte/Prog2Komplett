//
// Created by aazat on 30.05.2021.
//

#include <sstream>
#include "Punkt2D.h"

Punkt2D::Punkt2D() {}

Punkt2D::Punkt2D(double x, double y){
    this->x = x;
    this->y = y;
}

string Punkt2D::toString() {
    stringstream stream;
    stream << "(" << this->x << ", " << this->y << ")";
}