#pragma once
#include <string>

using namespace std;

class Voiture
{
private:
	string modele;

public:
	Voiture(string leModele, string numSerie,double pressionRouesAvant, double pressionRouesArrieres);
	string getModele();
	
	// Ajoutez ici les liens avec les classes moteur et Roue

};

