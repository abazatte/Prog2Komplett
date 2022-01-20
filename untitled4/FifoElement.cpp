
#include "FifoElement.h"

FifoElement::FifoElement(string text) {
    this->myString = text;
    this->next = nullptr;
}

FifoElement::~ FifoElement() = default;

FifoElement *FifoElement::getNext() const {
    return next;
}

void FifoElement::setNext(FifoElement *next) {
    FifoElement::next = next;
}

const string &FifoElement::getMyString() const {
    return myString;
}
