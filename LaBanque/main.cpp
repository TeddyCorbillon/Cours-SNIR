/**
 *  @author Corbillon Teddy
 *  @file main.cpp
 *  @version 1.0
 *  @date 23/09/2022
 */

#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"

using namespace std;

/**
 * @details Enumeration des choix possibles dans le menu
 * Pour la classe CompteBancaire
 */

/*

enum CHOIX_MENU
{
    OPTION_1 =1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

*/



enum CHOIX_MENU
{
    OPTION_1 =1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    OPTION_5,
    QUITTER
};



/**
 * @details Programme donnant les choix et leur reaction suite a l'entrée d'un certain chiffre
 * Pour la classe compteBancaire
 */

/*

int main()
{
    int choix;
    float montant;
    Menu Menu("../LaBanque/compteBancaire.txt");
    compteBancaire leCompteBancaire(0);
    do
    {
        choix = Menu.Afficher();
        switch (choix)
        {

        case OPTION_1:
            system("clear");
            cout << "Vous avez choisi de consulter votre solde" << endl;

            cout << "Votre solde est : " << leCompteBancaire.consulterSolde() << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            system("clear");
            cout << "Veuillez entrer le montant a ajouter" << endl;
            cin >> montant;
            cout << "Vous avez ajouté : " <<  leCompteBancaire.deposer(montant) << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            system("clear");
            cout << "Veuillez entrer le montant a retirer" << endl;
            cin >> montant;
            cout << "Vous avez retiré : " <<  leCompteBancaire.retirer(montant) << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            system("clear");
            cout << "Vous avez choisi de retourner en arriere"<< endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    }while(choix != QUITTER);




    return 0;
}

*/



int main()
{
    int choix;
    float montant;
    Menu Menu("../LaBanque/compteEpargne.txt");
    compteEpargne leCompteEpargne(0, 2);
    do
    {
        choix = Menu.Afficher();
        switch (choix)
        {
                case OPTION_1:
            system("clear");
            cout << "Vous avez choisi de consulter votre solde" << endl;

            cout << "Votre solde est : " << leCompteEpargne.consulterSolde() << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            system("clear");
            cout << "Veuillez entrer le montant a ajouter" << endl;
            cin >> montant;
            cout << "Vous avez ajouté : " <<  leCompteEpargne.deposer(montant) << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            system("clear");
            cout << "Veuillez entrer le montant a retirer" << endl;
            cin >> montant;
            cout << "Vous avez retiré : " <<  leCompteEpargne.retirer(montant) << " euros" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            system("clear");
            cout << "Vous avez de consulter vos interets" << endl;
            cout << "Votre interet est a 2%" << endl;
            cout << "Selon votre solde, vous gagnerez : " << leCompteEpargne.calculerInterets() << " euros d'interet "<< endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_5:
            cout << "Vous avez choisi l'option n°5" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    }while(choix != QUITTER);




    return 0;
}


