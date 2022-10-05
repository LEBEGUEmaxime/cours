#pragma once
class CCompte
{
private:
	double dSolde;

public:
	CCompte(double versementInitial = 0);
	double donnerSolde();
	bool ajouter(double valeur);
	bool retirer(double valeur);
	
};

