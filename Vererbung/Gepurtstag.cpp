//
// Created by aazat on 18.07.2021.
//
#include <string>
#include "Termin.cpp"
#include "Ereignis.cpp"
using namespace std;

class Geburtstag : public Termin, Ereignis{
protected:
    string name;
public:
    Geburtstag() = default;
    Geburtstag(const string& name, const Termin& datum);
};