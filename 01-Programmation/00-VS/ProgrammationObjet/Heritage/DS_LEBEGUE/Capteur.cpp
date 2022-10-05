#include "Capteur.h"

int nombreDeCapteurs = 0;

Capteur::Capteur(string type, string noSerie)
{
	this->type = type;
	this->noSerie = noSerie;
	nombreDeCapteurs++;
}

Capteur::~Capteur()
{
	nombreDeCapteurs--;
}
