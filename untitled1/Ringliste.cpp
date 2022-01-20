#include "Ringliste.h"
#include <iostream>
#include <sstream>
#include <string>

//Konstruktoren und Standardmethoden
Ringliste::Ringliste(int kapazitaet): kapazitaet(kapazitaet), leer(true), ring(kapazitaet), lesePos(0), schreibPos(0) {}

//Kopierkonstruktor

//Destruktor
Ringliste::~Ringliste() = default;

//Positionsinkrement

string Ringliste::toString() const {
    stringstream strom;
    strom << anzElemente() << "/" << kapazitaet << " | ";
    if (leer){
        return strom.str();
    }
    int pos = lesePos;
    do {
        strom << ring[pos] << " ";
        nextPos(pos);
    } while (pos != schreibPos);
    return strom.str();
}

//Vergleiche
bool Ringliste::operator==(const Ringliste &rl) const {
    string s1 = toString();
    string s2 = rl.toString();
    return (s1 == s2);
}

//Schreib und Leseoperationen
Ringliste &Ringliste::operator<<(int wert) {
    if (anzElemente() == kapazitaet) nextPos(lesePos);
    ring[schreibPos] = wert;
    nextPos(schreibPos);
    leer = false;
    return *this;
}

Ringliste &Ringliste::operator>>(int &wert) {
    if (anzElemente() == 1) leer = true;
    wert = ring[lesePos];
    nextPos(lesePos);
    return *this;
}

Ringliste &Ringliste::operator<<(const Ringliste &rl) {
    Ringliste rListe(rl);
    int wert;
    while (!rListe.leer) {
        rListe >> wert;
        operator<<(wert);
    }
    return *this;
}

//Elementweise Manipulation
void Ringliste::operator+=(int shift) {
    if (leer) return;
    int pos = lesePos;
    do {
        ring[pos] += shift;
        nextPos(pos);
    } while (pos != schreibPos);
}

void Ringliste::nextPos(int &pos) const {
    pos = (pos + 1) % kapazitaet;
}
//Gibt die Anzahl an Elementen der Ringliste zurück
int Ringliste::anzElemente() const {
    if (leer) return 0;
    if (schreibPos == lesePos) return kapazitaet;
    if (schreibPos > lesePos) return schreibPos - lesePos;
    else return kapazitaet - (lesePos - schreibPos);
}
