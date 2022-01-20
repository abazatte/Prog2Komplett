//
// Created by aazat on 02.06.2021.
//

#include <string>
#include <sstream>
#include "Punkt3D.h"
using namespace std;

Punkt3D::Punkt3D() {}

Punkt3D::Punkt3D(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

string Punkt3D::toString(){
    stringstream rString;
    rString << "(x: " << x << ",y: " << y << ",z: " << z << ")";
    return rString.str();
}