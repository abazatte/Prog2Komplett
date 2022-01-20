//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_KREIS_H
#define TEST_KREIS_H


#include "GeoObjekt.h"
#include "Punkt2D.h"

class Kreis: public GeoObjekt {
    Kreis(Kreis *clone);

    double radius;
Punkt2D zentrum;
public:
    Kreis();
    Kreis(const Punkt2D,const double radius);
    void setzeZentrum(const Punkt2D &);
    void setzeRadius(double);
    string toString();
    double inhalt();
    Kreis* clone();
    GeoObjekt& assign(const GeoObjekt&);
};


#endif //TEST_KREIS_H
