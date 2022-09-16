#include "barre.h"


Barre::Barre(const string _nom, const int _section, const int _densite, const string _reference):
    nom(_nom),
    reference(_reference),
    section(_section),
    densite(_densite)
{
    AfficherCaracteristiques();
}

Barre::~Barre()
{

}

int Barre::AfficherCaracteristiques()
{
    cout << endl << "Nom " << nom << " :" << endl;
    cout << "Référence : " << reference << endl;
    cout << "Section : " << section << endl;
    cout << "Densité : " << densite << endl;
    return 0;
}
