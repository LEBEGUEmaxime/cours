#pragma once
#include "personne.h"

class Etudiant :	public Personne
{
private:
	string classe;
	double moyenne;
	static int nombreEtudiants ;

public:
	Etudiant(string leNom , string lePrenom , string classe );
	~Etudiant();
	string getClasse();
	void setMoyenne(double value);
	double getMoyenne();
	static int getNombreEtudiants();
};