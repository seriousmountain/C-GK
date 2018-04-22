#ifndef QUADER_H
#define QUADER_H

#include "quadrat.h"
#include "rechteck.h"


class Quader : public Rechteck {
public:

    Quader();
    Quader(double laenge, double breite, double hoehe)
        : m_laenge(laenge), m_breite(breite), m_hoehe(hoehe){}

    /*
    Quader (double laenge = 10.0, double hoehe = 10.0, double breite = 10.0){
        this->laenge = laenge;
        this->breite = breite;
        this->hoehe = hoehe;
    }
    */

    double getFlaecheninhalt();

    double getVolumen();

private:

    double m_oberflaeche;
    double m_volumen;
    double m_laenge, m_breite, m_hoehe;

};

#endif // QUADER_H
