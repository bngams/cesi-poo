// Mystere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



char pickLetter(string& word) {
    srand(time(0));

    int position = rand() % word.size();

    char leter = word.at(position);

    word.erase(position, 1);

    return leter;
}

string mixWord(string& word, string& mixed) {
    if (word.size() == 0) {
        return mixed;
    }
    else {
        char randomLetter = pickLetter(word);
        mixed = mixed + randomLetter;
        return mixWord(word, mixed);
    }
}


bool guess(string motMyst�re) {
    cout << "Joueur 2, trouve le mot : ";
    string userGuess;
    cin >> userGuess;
    return userGuess == motMyst�re;
}

int main()
{
    string motMyst�re;

    cout << "Joueur 1, saisissez un mot myst�re :" << endl;

    cin >> motMyst�re;

    string motAM�langer = motMyst�re;
    string motM�lang�;
    mixWord(motAM�langer, motM�lang�);

    cout << "Le mot m�lang� est : " << motM�lang�;

    bool trouv� = false;

    while (!trouv�) {
        trouv� = guess(motMyst�re);
    }

    cout << "F�licitations ! Le mot myst�re �tait " << motMyst�re;

    return 0;
}
