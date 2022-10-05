#pragma once
#include <string>
#include <iostream>

using namespace std;

class Personne
{
protected: 
	string nom;
	string prenom;

public: 
	Personne(string leNom, string lePrenom);
	string getNom() { return this->nom; }	// Le "this->" montre juste qu'on accède aux attribus soit le private soit le protected 
	string getPrenom() { return this->prenom; }
};

