//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_METRIKVERHALTEN_H
#define TEST_METRIKVERHALTEN_H


#include "Punkt.h"

class MetrikVerhalten {
public:
    virtual double abstand(Punkt const&, Punkt const&)=0;
};


#endif //TEST_METRIKVERHALTEN_H
