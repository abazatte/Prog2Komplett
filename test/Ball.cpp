//
// Created by aazat on 02.06.2021.
//

#include <string>
#include "Ball.h"
#include "math.h"
#include "OperandenPassenNicht.h"
using namespace std;

Ball::Ball(){}

Ball::Ball( const Punkt3D zentrum, const double radius){
    this->radius = radius;
    this->zentrum = zentrum;
}

Ball::Ball(Ball *clone) {
    this->radius = clone->radius;
    this->zentrum = clone->zentrum;
}

void Ball::setzeZentrum(const Punkt3D &z){
    this->zentrum = z;
}

void Ball::setzeRadius(double r) {
    this->radius = r;
}

string Ball::toString(){
    string sRadius = to_string(this->radius);
    return "Quader: radius = " + sRadius + " | zentrum = " + this->zentrum.toString();
}

double Ball::inhalt(){
    double richtig = ((double) 4)/((double) 3);
    return richtig*M_PI*this->radius*this->radius*this->radius;
}

Ball* Ball::clone(){
    return new Ball(this);
}
GeoObjekt& Ball::assign(const GeoObjekt& p){
    const auto *p1 = dynamic_cast<const Ball*>(&p);
    if (!p1) throw OperandenPassenNicht();
    this->zentrum = p1->zentrum;
    this->radius = p1->radius;
    this->metrik = p1->metrik;
    return *this;
}