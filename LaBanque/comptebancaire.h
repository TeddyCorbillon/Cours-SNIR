/**
 *  @author Corbillon Teddy
 *  @file compteBancaire.h
 *  @version 1.0
 *  @date 23/09/2022
 */

#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include "menu.h"

/**
 * @details Modelisation de la classe compteBancaire demandé
 */

class compteBancaire
{
public:
    compteBancaire(const float _solde);
     float deposer(const float _montant);
    float retirer(const float _montant);
    float consulterSolde();

private:
    int solde = 0;
};

#endif // COMPTEBANCAIRE_H
