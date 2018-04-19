#include "rechteck.h"
#include "quadrat.h"

Rechteck::Rechteck(){
}

void Rechteck::setBreite(double breite){
    m_breite = breite;
}

double Rechteck::getBreite () const {
    return m_breite;
}

double Rechteck::getFlaecheninhalt(){
    m_flaecheninhalte = m_breite * m_laenge;
    return m_flaecheninhalte;
}
