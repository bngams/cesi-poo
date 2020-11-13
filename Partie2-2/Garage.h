#pragma once
#include "Vehicule.h"

class Garage
{
    private:
        // Souvenez-vous, quand on d�clare un tableau, on alloue en r�alit� de la m�moire dans le tas (heap) 
        // et on renvoie un pointeur vers le premier �l�ment
        Vehicule** places; 
        int position;
        int taille;
    public:
        Garage(int taille);

        void ranger(Vehicule* vehicule);

        void ranger(Vehicule* vehicule, int position);
    
        void allerTousA(std::string destination);

};
