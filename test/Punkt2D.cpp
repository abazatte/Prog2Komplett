//
// Created by aazat on 02.06.2021.
//

#include <string>
#include <sstream>
#include "Punkt2D.h"
using namespace std;

Punkt2D::Punkt2D() {}

Punkt2D::Punkt2D(double x, double y){
    this->x = x;
    this->y = y;
}

string Punkt2D::toString() {
    stringstream stream;
    stream << "(" << this->x << ", " << this->y << ")";
    return stream.str();
}

Punkt2D Punkt2D::clone() {
    Punkt2D punktKopie(x, y);
    return punktKopie;
}