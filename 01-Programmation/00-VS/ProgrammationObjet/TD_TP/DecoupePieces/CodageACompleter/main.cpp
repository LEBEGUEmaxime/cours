#include <iostream>
#include <conio.h>	
#include "Polygone.h"
#include "Cercle.h"
#include "Commande.h"

using namespace std ;				// espace de nommage standard



int main()
{
	// Testez la classe Cercle
	...



	// Testez la classe Polygone avec la figure de test du sujet
	double Coordonnees[6][2]={ { 1 , 1 } , { 3 , 5 } , { 5 , 7 } , { 5 , 1 } , { 3 , 3 } , { 3 , 1 } };
	

	...




	// Sapin de Noel et boules
	double CoordonneesSapin[15][2]={ { 2 , 2 } , { 5 , 4 } , { 3 , 4} , { 5 , 6 } , { 4 , 6 } , { 6 , 8 },  { 8 , 6 } , { 7 , 6 },
									 { 9 , 4 } , { 7 , 4} , { 10 , 2 } , { 6.5 , 2 } , { 6.5 , 1 },  { 5.5 , 1 } , { 5.5 , 2 }};
	
	
	double CoordonneesCentreCercles[6][2]={ { 2.5 , 3.5 } , { 3.5  , 5.5 } , { 4.5 , 7.5 } , { 7.5  , 7.5 } , { 8.5 , 5.5 } , { 9.5  , 3.5 } };
	int i;

		
	// Création du polygone sapin
	...

	cout <<"superficie du sapin = " << .... << "     " ;
	cout <<"Perimetre du sapin = " << .... << endl;

	// Création des 6 cercles
	...
		cout <<"superficie du cercle " << i <<" = " <<... << "     " ;
		cout <<"Perimetre du cercle  " << i <<" = " << ...<< endl;
	...

	// Création de la commande du Père Noel
	...

	// Ajout des figures (le sapin et les 6 cercles) à la commande
	...

	// Affichage du prix de cette commande
	cout <<"\nCout de la commande : " << ... <<"  = " << ... <<" euros" << endl;




	_getch();	// on attend l'appui sur une touche
	return 0 ;	// fin du programme
}

