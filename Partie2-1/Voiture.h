#pragma once
#include "Vehicule.h"
#include <string>

class Voiture : public Vehicule
{
   public:
       void allerA(std::string destination) {
           std::cout << "Je suis arriv� � " << destination << " en roulant" << std::endl;
    }
};

