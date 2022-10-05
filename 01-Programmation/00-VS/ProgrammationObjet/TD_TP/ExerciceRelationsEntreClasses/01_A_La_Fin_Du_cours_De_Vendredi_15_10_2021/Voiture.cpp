#include "Voiture.h"
#include "Roue.h"
#include "Moteur.h"

Voiture::Voiture(string leModele, string numSerie, double pressionRouesAvant, double pressionRouesArrieres)
{
	this->modele = leModele;

	// je crée les roues
	this->lesRoues[0] = new Roue(pressionRouesAvant); // AVG
	this->lesRoues[1] = new Roue(pressionRouesAvant); // AVD
	this->lesRoues[2] = new Roue(pressionRouesArrieres); // ARG
	this->lesRoues[3] = new Roue(pressionRouesArrieres); // ARD

	// je crée le moteur
	this->leMoteur = new Moteur(numSerie);
}

//========== DESTRUCTEUR ===========
Voiture::~Voiture()
{
	int i;
	for (i = 0; i < 4; i++)
		delete lesRoues[i];

	delete leMoteur;
}


