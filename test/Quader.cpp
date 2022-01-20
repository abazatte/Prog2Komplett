//
// Created by aazat on 02.06.2021.
//


#include <string>
#include "Quader.h"
#include "OperandenPassenNicht.h"
using namespace std;

Quader::Quader(){}

Quader::Quader(const Punkt3D luv, const Punkt3D roh){
    this->luv = luv;
    this->roh = roh;
}

void Quader::setzePunktLuv(const Punkt3D &luv){
    this->luv = luv;
}

void Quader::setzePunktRoh(const Punkt3D &roh) {
    this->roh = roh;
}

string Quader::toString(){
    return "Quader: luv = " + this->luv.toString() + " | roh = " + this->roh.toString();
}

double Quader::inhalt(){
    return (roh.x - luv.x) * (roh.y - luv.y) * (roh.z - luv.z);
}

Quader* Quader::clone(){
    return new Quader(this);
}
GeoObjekt& Quader::assign(const GeoObjekt& p){
    const auto *p1 = dynamic_cast<const Quader*>(&p);
    if (!p1) throw OperandenPassenNicht();
    this->roh = p1->roh;
    this->luv = p1->luv;
    this->metrik = p1->metrik;
    return *this;
}

Quader::Quader(Quader *clone) {
    this->luv = clone->luv;
    this->roh = clone->roh;
}
