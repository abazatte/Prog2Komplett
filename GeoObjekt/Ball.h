//
// Created by aazat on 26.05.2021.
//

#ifndef GEOOBJEKT_BALL_H
#define GEOOBJEKT_BALL_H
#include <string>
using namespace std;

#endif //GEOOBJEKT_BALL_H
class Ball:GeoObjekt{
    double radius;
    Punkt3D zentrum;
public:
    void setzeZentrum(p:Punkt3D const&);
    void setzeRadius(r:double);
    string toString();
    double inhalt();
};