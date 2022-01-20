//
// Created by aazat on 28.04.2021.
//

#include "Praedikate.h"
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

bool istKuerzerAls::operator()(const string &a, const string &b) {
    return a.size() < b.size();
}

bool istTeilerVon_n::operator()(int zahl) {
    return !(zahl % teiler);
}

bool istNahe::operator()(double b) {
    if (tolerance < 0) {
        tolerance *= -1;
    }
    return toTest - tolerance <= b && b <= toTest + tolerance;
}

vector<string> besitztMehrWorteAls::cutter(string str) {
    istringstream iss(str);
    vector<string> result(istream_iterator<string>{iss}, istream_iterator<string>());
    return result;
}

int besitztMehrWorteAls::actualWords(vector<string> words) {
    int result = 0;
    for (string s : words) {
        if (s.size() >= 2)
            result++;
    }
    return result;
}

bool besitztMehrWorteAls::operator()(string a, string b) {
    vector<string> cutFirst = cutter(a);
    vector<string> cutSecond = cutter(b);
    return actualWords(cutFirst) > actualWords(cutSecond);
};
