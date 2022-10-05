#include "Etudiant.h"
int Etudiant::nombreEtudiants=0 ;

Etudiant::Etudiant(string leNom , string lePrenom , string laClasse ):Personne(leNom , lePrenom)
{
	this->classe = laClasse;
	nombreEtudiants++; //idem que => Etudiant::nombreEtudiants++; 
}

Etudiant::~Etudiant()
{
	nombreEtudiants--; //idem que => Etudiant::nombreEtudiants--; 
}

string Etudiant::getClasse()
{
	return this->classe; //idem que => return classe; 
}

void Etudiant::setMoyenne(double value)
{
	this->moyenne=value; //idem que => moyenne = value;
}

double Etudiant::getMoyenne()
{
	return this->moyenne; //idem que => return moyenne; 
}

int Etudiant::getNombreEtudiants()
{
	return nombreEtudiants; //idem que => return Etudiant::nombreEtudiants;
}