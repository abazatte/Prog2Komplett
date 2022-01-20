//
// Created by aazat on 18.07.2021.
//

class Termin{
protected:
    int jahr;
    int monat;
    int tag;
public:
    Termin(int tag, int monat, int jahr){
        this->tag = tag;
        this->monat = monat;
        this->jahr = jahr;
    }
};