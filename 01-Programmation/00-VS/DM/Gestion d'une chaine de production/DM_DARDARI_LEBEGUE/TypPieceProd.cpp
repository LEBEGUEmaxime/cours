#include "TypPieceProd.h"
//==========Question 2============
int TypPieceProd::reference = 0;

TypPieceProd::TypPieceProd(string leNom, int leCode, int leNbBruts, int leNbUsi, int leNbRebus) : TypPiece(leNom, leCode)
{
    this->nbBruts = leNbBruts;
    this->nbUsi = leNbUsi;
    this->nbRebus = leNbRebus;
    this->reference++;
}
TypPieceProd::~TypPieceProd()
{
    this->reference--;
}

//==========Question 3============
void TypPieceProd::affiche()
{
    TypPiece::affiche();
    cout << "le nombre de rebus est de : " << nbRebus << endl;
    
}
//==========Question 4============
void TypPieceProd::afficheRef()
{
    cout << "Le reference est de : " << reference << endl;
}

//==========Question 5============
void TypPieceProd::affichage()
{
    TypPiece::affiche();
    cout << "Le nombre de pieces bruts est de : " << nbBruts << endl;
    cout << "Le nombre de piece usinee est de : " << nbUsi << endl;
    cout << "le nombre de rebus est de : " << nbRebus << endl;
}