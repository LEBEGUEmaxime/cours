#pragma once
#include <string>

using namespace std;

class Moteur;
class Roue;

class Voiture
{
private:
	string modele;

public:
	Voiture(string leModele, string numSerie,double pressionRouesAvant, double pressionRouesArrieres);
	~Voiture(); // DESTRUCTEUR

	string getModele() { return this->modele; }
	
	// Ajoutez ici les liens avec les classes moteur et Roue
	Moteur *leMoteur;
	Roue *lesRoues[4];

};

