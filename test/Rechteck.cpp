

#include <string>
#include <sstream>
#include "Rechteck.h"
#include "OperandenPassenNicht.h"
using namespace std;

Rechteck::Rechteck() {}
Rechteck::Rechteck(const Punkt2D lu, const Punkt2D ro) {
    this->lu = lu;
    this->ro = ro;
}

Rechteck::Rechteck(Rechteck *clone) {
    this->lu = clone->lu;
    this->ro = clone->ro;
}

Rechteck* Rechteck::clone() {
    return new Rechteck(this);
}


void Rechteck::setzePunktLu(const Punkt2D &lu) {
    this->lu = lu;
}

void Rechteck::setzePunktRo(const Punkt2D &ro) {
    this->ro = ro;
}

string Rechteck::toString() {
    stringstream stream;
    stream <<  "Rechteck: [" << this->lu.toString() << ", " << this->ro.toString() << "] ";
    return stream.str();
}

double Rechteck::inhalt() {
    return (ro.x - lu.x) * (ro.y - lu.y);
}

GeoObjekt& Rechteck::assign(const GeoObjekt& p){
    const auto *p1 = dynamic_cast<const Rechteck*>(&p);
    if (!p1) throw OperandenPassenNicht();
    this->ro = p1->ro;
    this->lu = p1->lu;
    this->metrik = p1->metrik;
    return *this;
}