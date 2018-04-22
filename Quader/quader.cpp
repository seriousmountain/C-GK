#include "quader.h"
#include "quadrat.h"
#include "rechteck.h"

Quader::Quader(){

}

double Quader::getFlaecheninhalt(){
    m_oberflaeche = 2*(m_laenge * m_breite + m_breite * m_hoehe + m_laenge * m_hoehe);
    return m_oberflaeche;
}

double Quader::getVolumen(){
    m_volumen = m_laenge * m_breite * m_hoehe;
    return m_volumen;
}
