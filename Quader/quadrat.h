// Quadrat.h
#ifndef QUADRAT_H
#define QUADRAT_H
class Quadrat {
    public:
        Quadrat(); // Konstruktor
        void setLaenge(double laenge);   // Methode,
                                         // nur Deklaration

        double getLaenge() const;

        double getFlaecheninhalt();

    protected:
        double m_laenge; // Attribut
        double m_flaecheninhalt;
};
#endif
