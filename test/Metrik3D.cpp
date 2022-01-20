//
// Created by aazat on 03.06.2021.
//

#include "Metrik3D.h"
#include <math.h>

double Metrik3D::abstand(const Punkt &roh, const Punkt &luv) {
    Punkt3D *p31=(Punkt3D*) &roh;
    Punkt3D *p32=(Punkt3D*) &luv;
    return sqrt(pow(p31->x-p32->x, 2) + pow(p31->y-p32->y,2) + pow(p31->z-p32->z,2));
}