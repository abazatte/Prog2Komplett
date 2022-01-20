
#ifndef FIFO_FIFO_H
#define FIFO_FIFO_H

#endif //FIFO_FIFO_H
/* Includes */
#include <iostream>
#include "FifoElement.h"

/* usings */
using std::cout;
using std::cin;
using std::string;


class Fifo {
    FifoElement *head{nullptr};
    FifoElement *tail{nullptr};
    int anzahl{0};
public:


    /* Standardkonstruktor */
    Fifo();

    /* Copy-Konstruktor */
    Fifo(Fifo &copy);

    /* Destruktor */
    ~Fifo();

    void push(const string &text);

    string pop();

    Fifo operator<<(const string &text);

    Fifo operator>>(string &text);

    operator int();

    int size() const;

    void info() const;

};



