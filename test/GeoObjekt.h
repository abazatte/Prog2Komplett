//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_GEOOBJEKT_H
#define TEST_GEOOBJEKT_H


#include "MetrikVerhalten.h"
#include <string>
using namespace std;
class GeoObjekt{
protected:
    MetrikVerhalten* metrik;
public:
    virtual ~GeoObjekt();
    virtual double inhalt()=0;
    virtual string toString()=0;
    virtual GeoObjekt *clone()=0;
    GeoObjekt& operator=(GeoObjekt&);
    virtual GeoObjekt& assign(const GeoObjekt&)=0;
};


#endif //TEST_GEOOBJEKT_H
