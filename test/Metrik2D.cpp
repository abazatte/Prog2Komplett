//
// Created by aazat on 03.06.2021.
//

#include "Metrik2D.h"
#include "math.h"

Metrik2D::Metrik2D() {}

double Metrik2D::abstand(const Punkt &ro, const Punkt &lu) {
    Punkt2D *p21 = (Punkt2D*) &ro;
    Punkt2D *p22 = (Punkt2D*) &lu;
    return sqrt(pow( p21->x - p22->x, 2) + pow(p21->y - p22->y,2));
} //dynamic cast immer nutzen!