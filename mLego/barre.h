
#ifndef BARRE_H
#define BARRE_H
#include "string"
#include <iostream>

using namespace std;
class Barre
{
public:
    Barre(const string _nom, const int _section, const int _densite, const string _reference);
    ~Barre();
    int AfficherCaracteristiques();
private:
    string nom;
    string reference;
    int section;
    int densite;
};

#endif // BARRE_H
