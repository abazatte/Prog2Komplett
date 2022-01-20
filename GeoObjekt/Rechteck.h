//
// Created by aazat on 26.05.2021.
//

#ifndef GEOOBJEKT_RECHTECK_H
#define GEOOBJEKT_RECHTECK_H
#include "GeoObjekt.h"
#include "Punkt2D.h"
#include <string>
using namespace std;

#endif //GEOOBJEKT_RECHTECK_H

class Rechteck:public GeoObjekt{
    Punkt2D lu;
    Punkt2D ro;
public:
    Rechteck(Punkt2D lu,Punkt2D ro);
    void setzePunktLu(Punkt2D const&);
    void setzePunktRo(Punkt2D const&);
    string toString();
    double inhalt();

    const Punkt2D &getLu() const;

    void setLu(const Punkt2D &lu);

    const Punkt2D &getRo() const;

    void setRo(const Punkt2D &ro);

};