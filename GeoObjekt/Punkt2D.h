//
// Created by aazat on 26.05.2021.
//

#ifndef GEOOBJEKT_PUNKT2D_H
#define GEOOBJEKT_PUNKT2D_H
#include <string>
#include "Punkt.h"

using namespace std;

#endif //GEOOBJEKT_PUNKT2D_H
class Punkt2D:public Punkt{
public:
    double x;
    double y;
    Punkt2D();
    Punkt2D(double x, double y);
    string toString();
};