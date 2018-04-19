// Quadrat.cpp
#include "quadrat.h"
#include "rechteck.h"

Quadrat::Quadrat(){

}

void Quadrat::setLaenge(double laenge){
    m_laenge = laenge;
}

double Quadrat::getLaenge() const {
    return m_laenge;
}

double Quadrat::getFlaecheninhalt(){
    m_flaecheninhalt = m_laenge * m_laenge;
    return m_flaecheninhalt;
}
