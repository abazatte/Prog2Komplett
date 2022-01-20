//
// Created by aazat on 02.06.2021.
//

#ifndef GEOOBJEKT_QUADER_H
#define GEOOBJEKT_QUADER_H

#endif //GEOOBJEKT_QUADER_H
#include "GeoObjekt.h"
#include "Punkt3D.h"
#include <string>
using namespace std;

class Quader : public GeoObjekt{
private:


    Punkt3D luv;
    Punkt3D roh;
public:
    Quader();
    Quader(const Punkt3D luv, const Punkt3D roh);
    Quader(Quader *clone);
    void setzePunktLuv(Punkt3D const& p);
    void setzePunktRoh(Punkt3D const& p);
    string toString();
    double inhalt();
    Quader* clone();
    GeoObjekt& assign(const GeoObjekt&);
};
