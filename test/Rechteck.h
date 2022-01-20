
#ifndef TEST_RECHTECK_H
#define TEST_RECHTECK_H


#include "Punkt2D.h"
#include "GeoObjekt.h"
#include "Metrik2D.h"
#include <string>
using namespace std;

class Rechteck: public GeoObjekt{
    Punkt2D lu;
    Punkt2D ro;
public:
    Rechteck();
    Rechteck(const Punkt2D lu, const Punkt2D ro);
    Rechteck(Rechteck*);
    void setzePunktLu(Punkt2D const&);
    void setzePunktRo(Punkt2D const&);
    string toString();
    double inhalt();
    Rechteck* clone();
    const Punkt2D &getLu() const;

    const Punkt2D &getRo() const;

    GeoObjekt& assign(const GeoObjekt& p);

};


#endif //TEST_RECHTECK_H
