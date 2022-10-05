#include "Personne.h"


Personne::Personne(string nom, string prenom)
{
	this->nom = nom;
	this->prenom = prenom;
}

void Personne::louer(Voiture *tasDeBoue)
{
	this->laVoiture = tasDeBoue;
}

