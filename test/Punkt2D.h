//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_PUNKT2D_H
#define TEST_PUNKT2D_H

#include "Punkt.h"

class Punkt2D: public Punkt{
public:
    double x;
    double y;
    Punkt2D();
    Punkt2D(double x, double y);
    std::string toString();

    Punkt2D clone();
};

#endif //TEST_PUNKT2D_H
