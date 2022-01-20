//
// Created by aazat on 03.06.2021.
//

#ifndef TEST_METRIK2D_H
#define TEST_METRIK2D_H

#include "MetrikVerhalten.h"
#include "Punkt2D.h"

class Metrik2D: public MetrikVerhalten{
public:
    Metrik2D();
    double abstand(Punkt const&, Punkt const&);
};

#endif //TEST_METRIK2D_H
