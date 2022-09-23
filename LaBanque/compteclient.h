/**
 *  @author Corbillon Teddy
 *  @file compteclient.h
 *  @version 1.0
 *  @date 23/09/2022
 */

#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include "menu.h"

/**
 * @details Modelisation de la classe compteclient demandé
 */

class CompteCLient
{
public:
    CompteCLient(const string _nom, const int _numero);
    ~CompteCLient();
    float OuvrirCompteEpargne();
    float GererCompteEpargne();
    float GererCompteBancaire();

private:
    string nom;
    int numero;
};

#endif // COMPTECLIENT_H
