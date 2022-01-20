//
// Created by aazat on 26.05.2021.
//

#include "MetrikVerhalten.h"

#ifndef GEOOBJEKT_GEOOBJEKT_H
#define GEOOBJEKT_GEOOBJEKT_H
#include <string>
using namespace std;

#endif //GEOOBJEKT_GEOOBJEKT_H

class GeoObjekt{
protected:
    MetrikVerhalten* metrik;
public:
    double inhalt();
    string toString();

};