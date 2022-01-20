//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_PUNKT3D_H
#define TEST_PUNKT3D_H


#include "Punkt.h"

class Punkt3D : public Punkt {
public:
    double x;
    double y;
    double z;
    string toString();
    Punkt3D();
    Punkt3D(double x, double y, double z);

};


#endif //TEST_PUNKT3D_H
