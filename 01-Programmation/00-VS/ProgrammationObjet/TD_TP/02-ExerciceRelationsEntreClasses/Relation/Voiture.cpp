#include "Voiture.h"
#include "Roue.h"
#include "Moteur.h"


Voiture::Voiture(string leModele, string numSerie, double pressionRouesAvant, double pressionRouesArrieres)
{
	this->modele = leModele;

	//je crée les roues
	this->LesRoues[0] = new Roue(pressionRouesAvant);	// AVG
	this->LesRoues[1] = new Roue(pressionRouesAvant);	// AVD
	this->LesRoues[2] = new Roue(pressionRouesArrieres);	// ARG
	this->LesRoues[3] = new Roue(pressionRouesArrieres);	// ARD

	// je crée le moteur
	this->leMoteur = new Moteur(numSerie);
}

//========== Destructeur ===========//
Voiture::~Voiture()
{
	int i;
		for (i = 0; i < 4; i++)
		{
			delete LesRoues[i];
		}
	delete leMoteur;

}


