
#ifndef FIFO_FIFOELEMENT_H
#define FIFO_FIFOELEMENT_H

#endif //FIFO_FIFOELEMENT_H

#include <iostream>

using std::string;

class FifoElement {
    FifoElement *next;
    string myString;
public:

    FifoElement(string text);

    ~ FifoElement();

    FifoElement *getNext() const;

    void setNext(FifoElement *next);

    const string &getMyString() const;

};



