// main.cpp
#include <iostream>
#include "quadrat.h"
#include "rechteck.h"
#include "quader.h"
using namespace std;

int main()
{/*
    Quadrat meinQuadrat;
    Quadrat* meinQuadratZeiger;
    Rechteck meinRechteck;
    Rechteck* meinRechteckZeiger;
    Quader meinQuader;
    Quader* meinQuaderZeiger;

    double breite,breite3;
    double laenge, laenge2, laenge3;
    double flaecheninhalt, flaecheninhalte, oberflaeche, volumen;

    meinQuadratZeiger = &meinQuadrat;
    meinRechteckZeiger = &meinRechteck;
    meinQuaderZeiger = &meinQuader;
    meinQuadrat.setLaenge(25.0);
    meinRechteck.setBreite(10.0);
    meinRechteck.setLaenge(30.0);
    meinQuader.setLaenge(100);
    meinQuader.setBreite(5);

    laenge = meinQuadratZeiger->getLaenge();
    breite = meinRechteckZeiger->getBreite();
    laenge2 = meinRechteckZeiger->getLaenge();
    laenge3 = meinQuaderZeiger->getLaenge();
    breite3 = meinQuaderZeiger->getBreite();



    flaecheninhalt = meinQuadratZeiger->getFlaecheninhalt();
    flaecheninhalte = meinRechteckZeiger->getFlaecheninhalt();
    oberflaeche = meinQuaderZeiger->getFlaecheninhalt();
    volumen = meinQuaderZeiger->getVolumen();
    cout << volumen;

    */

    double volumen;

    Quader meinQuader(10.0,20.0,30.0);
    Quader* meinQuaderZeiger;

    meinQuaderZeiger = &meinQuader;



    volumen = meinQuaderZeiger->getVolumen();

    cout << "Volumen Quader: " << volumen << "\n";

    return 0;
}

