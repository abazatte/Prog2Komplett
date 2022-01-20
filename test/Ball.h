//
// Created by aazat on 02.06.2021.
//

#ifndef TEST_BALL_H
#define TEST_BALL_H

#include "GeoObjekt.h"
#include "Punkt3D.h"
#include <string>
using namespace std;

class Ball : public GeoObjekt{
private:
    double radius;
    Punkt3D zentrum;
public:
    Ball();
    Ball(const Punkt3D zentrum, const double radius);
    Ball(Ball*);
    void setzeZentrum(Punkt3D const& p);
    void setzeRadius(double r);
    string toString();
    double inhalt();
    Ball* clone();
    GeoObjekt& assign(const GeoObjekt&);
};

#endif //TEST_BALL_H
