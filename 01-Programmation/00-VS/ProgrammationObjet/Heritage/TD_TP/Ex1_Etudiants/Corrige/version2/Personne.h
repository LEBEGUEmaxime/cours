#pragma once
#include <string>
using namespace std;

class Personne
{
protected :
	string nom , prenom ;
public:
	Personne(string leNom , string lePrenom);
	string getNom() {return nom ; }
	string getPrenom() {return prenom; }
};