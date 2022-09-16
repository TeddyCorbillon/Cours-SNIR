#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(const string _nom, const int _section, const float _densite, const string _reference, const int _longueur, const int _diametre);
    int CalculerSection();
    int CalculerMasse();
protected:
    int diametre;
    float sectionRonde;
};

#endif // BARRERONDE_H
