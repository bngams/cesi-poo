#pragma once
#include <iostream>
#include <string>
#include "Voiture.h"


Voiture maVoitureStatique1;


void test() {

	static Voiture maVoitureStatique2;

	Voiture maVoitureDynamique;

	maVoitureStatique1.d�marrer();
	maVoitureStatique2.d�marrer();
	maVoitureDynamique.d�marrer();


	maVoitureStatique1.nbChevaux = 5;
	maVoitureStatique2.nbChevaux = 6;
	maVoitureDynamique.nbChevaux = 7;

}

int main() {

	test();

	test();

	std::string pause;
	std::cin >> pause;

	return 0;
}


