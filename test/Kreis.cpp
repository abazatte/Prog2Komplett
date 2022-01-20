//
// Created by aazat on 02.06.2021.
//

#include "Kreis.h"
#include <string>
#include "math.h"
#include "OperandenPassenNicht.h"
using namespace std;

Kreis::Kreis(){}

Kreis::Kreis(const Punkt2D zentrum, const double radius){
    this->radius = radius;
    this->zentrum = zentrum;
}
Kreis::Kreis(Kreis*clone) {
    this->radius = clone->radius;
    this->zentrum = clone->zentrum;
}

Kreis* Kreis::clone() {
    return new Kreis(this);
}


void Kreis::setzeZentrum(const Punkt2D &z){
    this->zentrum = z;
}

void Kreis::setzeRadius(double r) {
    this->radius = r;
}

string Kreis::toString(){
    string sRadius = to_string(this->radius);
    return "Kreis: ["  + this->zentrum.toString() + ", " + sRadius + "] ";
}

double Kreis::inhalt(){
    return M_PI*this->radius*this->radius;
}

GeoObjekt &Kreis::assign(const GeoObjekt & p) {
        const auto *p1 = dynamic_cast<const Kreis*>(&p);
        if (!p1) throw OperandenPassenNicht();
        this->zentrum = p1->zentrum;
        this->radius = p1->radius;
        this->metrik = p1->metrik;
        return *this;
}
