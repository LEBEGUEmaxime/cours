#include "Etudiant.h"

int Etudiant::nombreEtudiants = 0; // Initialisation attribut statique

Etudiant::Etudiant(string leNom, string lePrenom, string laClasse) : Personne(leNom, lePrenom)
{
	this->classe = classe;
	this->nombreEtudiants++;
}

Etudiant::~Etudiant()
{
	this->nombreEtudiants--;
}

void Etudiant::setMoyenne(double laMoyenne)
{
	this->moyenne = laMoyenne;
}