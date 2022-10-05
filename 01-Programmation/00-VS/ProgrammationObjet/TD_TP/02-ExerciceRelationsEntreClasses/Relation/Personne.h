#pragma once
#include <string>
using namespace std;

class Voiture; // Je déclare l'existance de la classe voiture

class Personne
{
private:
	string nom, prenom;

public:
	Personne(string nom , string prenom);
	void louer(Voiture *tasDeBoue);	//Louer un voiture

	// Ajoutez ici le lien avec la classe Voiture
	Voiture *laVoiture;
	
};

