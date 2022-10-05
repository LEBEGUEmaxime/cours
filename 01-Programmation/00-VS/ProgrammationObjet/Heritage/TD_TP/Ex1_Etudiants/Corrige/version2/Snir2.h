#pragma once
#include "Etudiant.h"
class Snir2 :	public Etudiant
{
protected:
	string matierePreferee;

public:
	Snir2(string leNom, string lePrenom);

	void setMatierePreferee(string laMatierePreferee)
	{
		this->matierePreferee = laMatierePreferee ;
	}
	string getMatierePreferee() 
	{ 
		return this->matierePreferee; 
	}
};

