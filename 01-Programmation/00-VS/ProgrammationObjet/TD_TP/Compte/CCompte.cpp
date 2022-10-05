#include "CCompte.h"

CCompte::CCompte(double versementInitial)
{
	this->dSolde = versementInitial;
}

double CCompte::donnerSolde()
{
	return this->dSolde;
}

bool CCompte::ajouter(double valeur)
{
	if (valeur < 0) return false;
	this->dSolde += valeur;
	return true;
}
bool CCompte::retirer(double valeur)
{
	if (valeur < 0) return false;
	if (valeur > this->dSolde) return false;
	this->dSolde -= valeur;
	return true;
}
