#pragma once
#include <string>

using namespace std;

class Moteur
{
private:
	string numeroSerie;
public:
	Moteur(string numeroSerie);
	string getNumeroSerie() { return this->numeroSerie; }
	
};

