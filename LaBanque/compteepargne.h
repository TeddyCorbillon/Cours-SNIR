/**
 *  @author Corbillon Teddy
 *  @file compteepargne.h
 *  @version 1.0
 *  @date 23/09/2022
 */

#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "menu.h"
#include "comptebancaire.h"

/**
 * @details Modelisation de la classe compteEpargne demandé
 */

class compteEpargne
{
public:
    compteEpargne(const float _tauxinterets, const float _solde);
    float calculerInterets();
    float deposer(const float _montant);
   float retirer(const float _montant);
   float consulterSolde();
private:
   int solde = 0;
    float tauxInteret;
};

#endif // COMPTEEPARGNE_H
