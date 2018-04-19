// main.cpp
#include <iostream>
#include "quadrat.h"
#include "rechteck.h"

using namespace std;

int main()
{
    Quadrat meinQuadrat;
    Quadrat* meinQuadratZeiger;
    Rechteck meinRechteck;
    Rechteck* meinRechteckZeiger;

    double breite;
    double laenge, laenge2;
    double flaecheninhalt, flaecheninhalte;

    meinQuadratZeiger = &meinQuadrat;
    meinRechteckZeiger = &meinRechteck;
    meinQuadrat.setLaenge(25.0);
    meinRechteck.setBreite(10.0);
    meinRechteck.setLaenge(30.0);

    laenge = meinQuadratZeiger->getLaenge();
    breite = meinRechteckZeiger->getBreite();
    laenge2 = meinRechteckZeiger->getLaenge();

    flaecheninhalt = meinQuadratZeiger->getFlaecheninhalt();
    flaecheninhalte = meinRechteckZeiger->getFlaecheninhalt();

    cout << flaecheninhalte;
    return 0;
}

