#include <iostream>
#include "Punkt.h"
#include "GeoObjekt.h"
#include "Rechteck.h"
#include "Kreis.h"
#include "Quader.h"
#include "Ball.h"
#include "OperandenPassenNicht.h"

using namespace std;

int main() {
    cout << "Rechtecke" << endl;
    cout << "---------" << endl;
    cout << "statischer Test" << endl;
    Rechteck rechteck(Punkt2D(0, 0), Punkt2D(2, 1));
    cout << rechteck.toString() << " " << rechteck.inhalt() << endl;
    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels clone" << endl;
    GeoObjekt *pGeoR = &rechteck;
    GeoObjekt *pGeoR2 = pGeoR->clone();
    Rechteck *pRechteck2 = dynamic_cast<Rechteck *>(pGeoR2);
    pRechteck2->setzePunktLu(Punkt2D(-1, -1));
    cout << pGeoR->toString() << " " << pGeoR->inhalt() << endl;
    cout << pGeoR2->toString() << " " << pGeoR2->inhalt() << endl;
    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels assign" << endl;
    (*pGeoR2) = (*pGeoR);
    pRechteck2->setzePunktRo(Punkt2D(2,2));
    cout << pGeoR->toString() << " " << pGeoR->inhalt() << endl;
    cout << pGeoR2->toString() << " " << pGeoR2->inhalt() << endl;


    cout << endl;
    cout << "Kreise" << endl;
    cout << "---------" << endl;
    cout << "statischer Test" << endl;
    Kreis kreis( Punkt2D(1,1), 2);
    cout << kreis.toString() << " " << kreis.inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels clone" << endl;
    GeoObjekt* pGeoK = &kreis;
    GeoObjekt* pGeoK2 = pGeoK->clone();
    Kreis* pKreis2 = dynamic_cast<Kreis*>(pGeoK2);
    pKreis2->setzeRadius(1);
    cout << pGeoK->toString() << " " << pGeoK->inhalt() << endl;
    cout << pGeoK2->toString() << " " << pGeoK2->inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels assign" << endl;
    (*pGeoK2) = (*pGeoK);
    pKreis2->setzeZentrum(Punkt2D(0,0));
    cout << pGeoK->toString() << " " << pGeoK->inhalt() << endl;
    cout << pGeoK2->toString() << " " << pGeoK2->inhalt() << endl;

    try {
        (*pGeoK2) = (*pGeoR2);
    } catch (OperandenPassenNicht&)
    { cout << "erwartete Ausnahme geworfen" << endl; }

    try {
        (*pGeoR2) = (*pGeoK2);
    } catch (OperandenPassenNicht&)
    { cout << "erwartete Ausnahme geworfen" << endl; }

    //
    // ---------------------------------------------------------------------------
    //


    cout << endl;
    cout << "Quader" << endl;
    cout << "---------" << endl;
    cout << "statischer Test" << endl;
    Quader quader( Punkt3D(0,0,0), Punkt3D(2,1,2));
    cout << quader.toString() << " " << quader.inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels clone" << endl;
    GeoObjekt* pGeoQ = &quader;
    GeoObjekt* pGeoQ2 = pGeoQ->clone();
    Quader* pQuader2 = dynamic_cast<Quader*>(pGeoQ2);
    pQuader2->setzePunktLuv(Punkt3D(-1,-1,-1));
    cout << pGeoQ->toString() << " " << pGeoQ->inhalt() << endl;
    cout << pGeoQ2->toString() << " " << pGeoQ2->inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels assign" << endl;
    (*pGeoQ2) = (*pGeoQ);
    pQuader2->setzePunktRoh(Punkt3D(2,2,2));
    cout << pGeoQ->toString() << " " << pGeoQ->inhalt() << endl;
    cout << pGeoQ2->toString() << " " << pGeoQ2->inhalt() << endl;

 try {
  (*pGeoQ2) = (*pGeoR2);
 } catch (OperandenPassenNicht&)
 { cout << "erwartete Ausnahme geworfen" << endl; }

    cout << endl;
    cout << "Baelle" << endl;
    cout << "---------" << endl;
    cout << "statischer Test" << endl;
    Ball ball( Punkt3D(1,1,1), 2);
    cout << ball.toString() << " " << ball.inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels clone" << endl;
    GeoObjekt* pGeoB = &ball;
    GeoObjekt* pGeoB2 = pGeoB->clone();
    Ball* pBall2 = dynamic_cast<Ball*>(pGeoB2);
    pBall2->setzeRadius(1);
    cout << pGeoB->toString() << " " << pGeoB->inhalt() << endl;
    cout << pGeoB2->toString() << " " << pGeoB2->inhalt() << endl;

    cout << endl;
    cout << "Polymorphietest - tiefe Kopie mittels assign" << endl;
    (*pGeoB2) = (*pGeoB);
    pBall2->setzeZentrum(Punkt3D(0,0,0));
    cout << pGeoB->toString() << " " << pGeoB->inhalt() << endl;
    cout << pGeoB2->toString() << " " << pGeoB2->inhalt() << endl;

    try {
        (*pGeoB2) = (*pGeoK2);
    } catch (OperandenPassenNicht&)
    { cout << "erwartete Ausnahme geworfen" << endl; }

    return 0;
}
