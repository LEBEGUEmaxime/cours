#pragma once
#include "TypPiece.h"

class TypPieceProd :
    public TypPiece
{
protected:
    int nbBruts, nbUsi, nbRebus; // Nombre de piéces brutes, usinées et le rebus
    //==========Question 2============
    static int reference;
public:
    TypPieceProd(string leNom = "PROD", int leCode = -1, int leNbBruts = 0, int leNbUsi = 0, int leNbRebus = 0);
    ~TypPieceProd();
    int getNbRebus() { return this->nbRebus; }   // Accesseur au nombre de rebus
    //==========Question 3============
    void affiche();
    //==========Question 4============
    void afficheRef();
    //==========Question 5============
    void affichage();

};

