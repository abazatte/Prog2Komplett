//
// Created by aazat on 03.06.2021.
//

#ifndef TEST_METRIK3D_H
#define TEST_METRIK3D_H

#include "MetrikVerhalten.h"
#include "Punkt3D.h"

class Metrik3D: MetrikVerhalten{
public:
    double abstand(const Punkt &, const Punkt &);
};

#endif //TEST_METRIK3D_H
