// Partie2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "Vehicule.h"
#include "Voiture.h"


int main()
{
    // Pour avoir des caract�res sp�ciaux dans la console
    std::locale::global(std::locale(""));

    // Essayez d'ex�cuter le code avec et sans le mot-cl� virtual sur la m�thode de la classe Vehicule

    Vehicule* vehicule1 = new Vehicule();
    Vehicule* vehicule2 = new Voiture();
    Voiture* vehicule3 = new Voiture();

    vehicule1->allerA("la maison");
    vehicule2->allerA("la plage");
    vehicule3->allerA("la montagne");

    vehicule1 = new Voiture();

    vehicule1->allerA("la maison");
    vehicule1->Vehicule::allerA("la maison");

}
