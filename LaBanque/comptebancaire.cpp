/**
 *  @author Corbillon Teddy
 *  @file compteBancaire.cpp
 *  @version 1.0
 *  @date 23/09/2022
 */

#include "comptebancaire.h"
#include "menu.h"

compteBancaire::compteBancaire(const float _solde)
{

}

float compteBancaire::deposer(const float _montant)
{
   solde = solde + _montant;
   return solde;
}

float compteBancaire::retirer(const float _montant)
{
    solde = solde - _montant;
    return solde;
}

float compteBancaire::consulterSolde()
{
    return solde;
}
