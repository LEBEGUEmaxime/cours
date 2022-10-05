#include "CCompte.h"

CCompte::CCompte(double versementInitial)
{
	this->dSolde = versementInitial;

}

double CCompte::donnerSolde()
{
	return this->dSolde;
}

bool CCompte::ajouter(double dVal)
{
	if (dVal > 0)
	{
		this->dSolde = this->dSolde + dVal;
		return true;
	}
	else
		return false;
}

bool CCompte::retirer(double dVal)
{
	if (dVal > 0 && dVal < this->dSolde)
	{
		this->dSolde = this->dSolde - dVal;
		return true;
	}
	else
		return false;
}
