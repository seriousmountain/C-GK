#ifndef RECHTECK_H
#define RECHTECK_H
#include "quadrat.h"

class Rechteck : public Quadrat {

public:
        Rechteck(); // Konstruktor

        void setBreite(double breite);

        double getBreite() const;

        double getFlaecheninhalt();

private:
        double m_breite;
        double m_flaecheninhalte;
};

#endif // RECHTECK_H
