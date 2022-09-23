/**
 *  @author Corbillon Teddy
 *  @file compteepargne.cpp
 *  @version 1.0
 *  @date 23/09/2022
 */

#include "compteepargne.h"
#include "menu.h"







compteEpargne::compteEpargne(const float _tauxinterets, const float _solde)
{

}

float compteEpargne::calculerInterets()
{
    int interetsDuSolde;
    interetsDuSolde = solde * 0.02;
    return interetsDuSolde;
}

float compteEpargne::deposer(const float _montant)
{
    solde = solde + _montant;
    return solde;
}

float compteEpargne::retirer(const float _montant)
{
    solde = solde - _montant;
    return solde;
}

float compteEpargne::consulterSolde()
{
    return solde;
}

