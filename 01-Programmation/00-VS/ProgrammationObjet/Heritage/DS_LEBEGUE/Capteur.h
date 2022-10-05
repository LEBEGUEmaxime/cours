#pragma once
#include <string>

using namespace std;

class Capteur
{
private :
	static int nombreDeCapteurs;
	string type;
	string noSerie;

public:
	Capteur(string type = "TEMP", string noSerie = "33");
	string getType() { return this->type; }
	string getNoSerie() { return this->noSerie; }
	static int getNombreCapteurs() { return nombreDeCapteurs; }
	~Capteur();
};

