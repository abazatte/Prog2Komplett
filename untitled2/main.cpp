#include <iostream>
#include "Praedikate.h"


int main() {
    istKuerzerAls istKuerzerAlstest;
    istTeilerVon_n teilerVonN(4);
    istNahe istNahe0001(3.123);
    istNahe istNahe4125(3.123, 4.1250);
    besitztMehrWorteAls mehrWorte;

    cout << "istKuerzerAls Test -> " << "Hallo : Tag | " << boolalpha << istKuerzerAlstest("Hallo", "Tag") << endl;
    cout << "istKuerzerAls Test -> " << "Tag : Hallo | " << istKuerzerAlstest("Tag", "Hallo") << endl;
    cout << "istTeilerVon_n Test -> " << "Ist 63 ein Teiler von 4? | " << teilerVonN(63) << endl;
    cout << "istTeilerVon_n Test -> " << "Ist 40 ein Teiler von 4? | " << teilerVonN(40) << endl;
    cout << "istNahe Test -> " << "3.123, 2.1234, Tolerance: 0.0001 | " << istNahe0001(2.1234) << endl;
    cout << "istNahe Test -> " << "3.123, 2.1234, Tolerance: 4.1250 | " << istNahe4125(2.1234) << endl;
    cout << "besitztMehrWorterAls Test -> " << "Hallo was geht? vs Moin | "
         << mehrWorte("Hallo was geht?", "Moin") << endl;
    cout << "besitztMehrWorterAls Test -> " << "Moin vs. Hallo was geht? | "
         << mehrWorte("Moin", "Hallo was geht?") << endl;
    return 0;
}
