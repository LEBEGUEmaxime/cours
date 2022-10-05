#include "TypPiece.h"
//==========Question 1============
TypPiece::TypPiece(string str, int c)
{
	this->nom = str;
	this->code = c;	
}

//==========Question 3============
void TypPiece::affiche()
{
	cout << "Le nom est " << this->nom << endl << "Le code est " << this->code << endl;
}