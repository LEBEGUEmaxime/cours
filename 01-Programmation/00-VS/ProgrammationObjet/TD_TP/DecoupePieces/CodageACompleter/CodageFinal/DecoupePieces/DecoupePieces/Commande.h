#pragma once
#include <vector>
#include <string>
#include "Figure.h"

using namespace std;

class Figure;

class Commande
{
private:
	bool commandeTerminee;
	double prixMetreDecoupe , prixMetreCarreMatiere ;
	string idCommande;

public:
	Commande(string identifiantCommande , double lePrixMetreDecoupe , double lePrixMetreCarreMatiere);
	string getIdCommande() { return idCommande; }
	void ajouterNouvelleFigure(.......................);
	void cloturerCommande();

	double getPrix() ;

};

