#pragma once
#include <string>
using namespace std;

class Voiture;	// je déclare l'existence de la classe Voiture

class Personne
{
private:
	string nom, prenom;

public:
	Personne(string nom , string prenom);
	void louer(Voiture *tasDeBoue); // louer une voiture

	// Ajoutez ici le lien avec la classe Voiture
	Voiture *laVoiture;
	
};

