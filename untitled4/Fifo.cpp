
#include "Fifo.h"
#include <iostream>

using std::string;

Fifo::Fifo() : head(nullptr), tail(nullptr), anzahl(0) {};

Fifo::~Fifo() = default;

Fifo::Fifo(Fifo &copy) {
    FifoElement *newFifoElement = copy.head;                    // Initial erstmal ein Temp FifoElement erstellen.
    while (newFifoElement != nullptr) {                         // Solange das neue FifoElement auf kein Nullptr zeigt
        push(newFifoElement->getMyString());                    //  Dann inserte mit der Methode push
        newFifoElement = newFifoElement->getNext();                  // ein neues FifoElement zeigt nun auf next damit es zu einem "Zug" kommt
    }
}


void Fifo::push(const string &text) {                                 // Methode fuer das Pushen
    FifoElement *neuesElement = new FifoElement(text);       // Initial erstmal ein Temp FifoElement erstellen.
    if (head == nullptr) {                                        // Wenn kein FifoElement in der Liste ist
        head = neuesElement;                                    // Dann ist es das Head-Element
        tail = neuesElement;                                    // und gleichzeitig das Tail-Element
    } else {
        tail->setNext(neuesElement);                              // Man ueberschreibt den Nullpointer vom ende "next" des tails. Der bekommt das neue Ende.
        tail = neuesElement;                                    // Das neue FifoElement was erstellt wurde ist nun das neue Tail. So ensteht der Zug
    }
    anzahl++;                                             // Globale variable die hochgezählt wird falls man die Anzahl der FifoElemente braucht
}

string Fifo::pop() {
    if (head == nullptr) {
        throw "Es gibt nix in der Liste";
    }
    string ausgabe;
    ausgabe = head->getMyString();
    head = head->getNext();
    anzahl--;
    return ausgabe;
}


Fifo Fifo::operator<<(const string &text) {
    push(text);
    return *this;
}

Fifo Fifo::operator>>(string &text) {                          //help reference
    text = pop();                                              //help aus der Main wird zu dem return wert von pop
    return *this;
}

int Fifo::size() const {                                              // Gibt den Fuellstand des Fifos aus.
    return anzahl;
}

Fifo::operator int() {
    return size();
}

void Fifo::info() const {
    FifoElement *newFifoElement = this->head;
    while (newFifoElement != nullptr) {
        std::cout << newFifoElement->getMyString() << std::endl;
        newFifoElement = newFifoElement->getNext();
    }
}