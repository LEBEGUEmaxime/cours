#pragma once
#include <string>
#include <iostream>

using namespace std;

class CStringPerso : public string
{
public:
	CStringPerso(string init = "Qu'est-ce que c'est bien le C++ !");
	void reverse(); // Inverse la chaine
	int getNBMots(); // Renvoie le nombre de mots 
};

