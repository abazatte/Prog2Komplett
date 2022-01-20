//
// Created by aazat on 26.05.2021.
//

#ifndef GEOOBJEKT_QUADER_H
#define GEOOBJEKT_QUADER_H
#include <string>
using namespace std;

#endif //GEOOBJEKT_QUADER_H
class Quader:GeoObjekt{
    Punkt3D luv;
    Punkt3D roh;
public:
    void setzePunktLuv(p:Punkt3D const&);
    void setzePunktRoh(p:Punkt3D const&);
    string toString();
    double inhalt();
};