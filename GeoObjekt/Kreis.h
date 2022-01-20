//
// Created by aazat on 26.05.2021.
//

#ifndef GEOOBJEKT_KREIS_H
#define GEOOBJEKT_KREIS_H
#include <string>
using namespace std;
#endif //GEOOBJEKT_KREIS_H
class Kreis:GeoObjekt{
    double radius;
    Punkt2D zentrum;
public:
    void setzeZentrum(p:Punkt2D const&);
    void setzeRadius(r:double);
    string toString();
    double inhalt();
};