#pragma once
#include <string>
#include <iostream>
#include "Personne.h"

using namespace std;

class Etudiant :
	public Personne
{
private:
	string classe;
	double moyenne;
	static int nombreEtudiants;

public:
	Etudiant(string leNom, string lePrenom, string laClasse);
	~Etudiant();
	string getClasse() { return this->classe; }
	void setMoyenne(double laMoyenne);
	double getMoyenne() { return this->moyenne; }
	int getNombreEtudiants() { return this->nombreEtudiants; }
};

