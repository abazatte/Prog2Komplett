
#ifndef RINGLISTE_H_INCLUDED
#define RINGLISTE_H_INCLUDED

#include <utility>
#include <vector>
#include <string>
using namespace std;

class Ringliste {
    int kapazitaet;
    bool leer;
    vector<int> ring;
    int lesePos;
    int schreibPos;

    void nextPos(int &) const;

public:

//Konstruktoren
    Ringliste(int kapazitaet = 10);

    ~Ringliste();

//Informationen
    int anzElemente() const;

    string toString() const;

//Vergleiche
    bool operator==(const Ringliste &) const;

//Schreib und leseoperation
    Ringliste &operator<<(int wert);

    Ringliste &operator<<(const Ringliste &);

    Ringliste &operator>>(int &wert);

//elementeweise Manipulation
    void operator+=(int);

};

#endif