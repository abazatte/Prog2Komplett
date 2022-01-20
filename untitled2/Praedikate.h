//
// Created by aazat on 28.04.2021.
//
#ifndef INC_1_3_PRAEDIKATE_H
#define INC_1_3_PRAEDIKATE_H


#include <string>
#include <vector>

using namespace std;

class istKuerzerAls {
public:
    bool operator()(const string& a, const string& b);
};

class istTeilerVon_n {
    int teiler;
public:
    explicit istTeilerVon_n(int n) : teiler(n) {}
    bool operator()(int zahl);
};

class istNahe {
    double tolerance;
    double toTest;
public:
    explicit istNahe(double test, double tol) : tolerance(tol), toTest(test) {}

    explicit istNahe(double test) : toTest(test), tolerance(0.0001) {}

    bool operator()(double b);

};

class besitztMehrWorteAls {
public:
    static vector<string> cutter(string a);

    static int actualWords(vector<string> words);

    bool operator()(string a, string b);
};


#endif //UNTITLED2_PRAEDIKATE_H
