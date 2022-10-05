#include "StringPerso.h"

//********** Constructeur ****************
CStringPerso :: CStringPerso (string strInit) : string(strInit)
{
}

// ********* Inversion de la chaine **********
void CStringPerso ::Reverse()
{
	int i , longueur ;
	char cTemp;

	longueur = this->size();
	for (i=0 ; i<longueur/2 ; i++)
	{
		cTemp = (*this)[i];
		(*this)[i]=(*this)[longueur-1-i];
		(*this)[longueur-1-i]=cTemp;
	}

}

//***** Récupération du nombre de mots *****
int CStringPerso :: GetNbMots()
{
	int i, ideb , ifin , Nb=1;
	// == Ne pas tenir compte des espaces du début ==
	ideb=0;
	while ( (*this)[ideb] == ' ') ideb++;

	//== Ne pas tenir compte des espaces de la fin ==
	ifin=this->length() - 1;
	while ((*this)[ifin] == ' ') ifin--;
	
	//=== On compte le nombre de mots ====
	for (i=ideb ; i<= ifin ; i++)
	{
		if ((*this)[i] == ' ')
		{
			Nb++; // un mot en plus
			do    // on incrémente i jusqu'à trouver un caractère
				  // différent de l'espace
				i++;
			while ( (*this)[i] == ' ' && i < this->length() );
		}
	}
	return Nb;
}