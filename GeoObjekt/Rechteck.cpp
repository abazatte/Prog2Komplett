//
// Created by aazat on 30.05.2021.
//

#include <sstream>
#include "Rechteck.h"

Rechteck::Rechteck(Punkt2D lu,Punkt2D ro){
    this->lu = lu;
    this->ro = ro;
}

void Rechteck::setzePunktLu(const Punkt2D &ul) {
    setLu(ul);
}

void Rechteck::setzePunktRo(const Punkt2D &roo) {
    setRo(roo);
}

string Rechteck::toString() {
    stringstream stream;
    stream << "Rechteck: [" << lu.toString() << ", " << ro.toString() << "] " << endl;
}

double Rechteck::inhalt() {
    return ((ro.x - lu.x) * (ro.y -lu.y));
}

const Punkt2D &Rechteck::getLu() const {
    return lu;
}

void Rechteck::setLu(const Punkt2D &lu) {
    Rechteck::lu = lu;
}

const Punkt2D &Rechteck::getRo() const {
    return ro;
}

void Rechteck::setRo(const Punkt2D &ro) {
    Rechteck::ro = ro;
}

