#include <iostream>
#include <conio.h>	
#include "point3D.h"


using namespace std ;	// espace de nommage standard


int main()
{
	Point   p1(2,4);
	Point3D p2(5,7,11,3);

	p1.affiche();
	p2.affiche();
	p2.changeGrosseur(2);
	p2.affiche();


	_getch();	// on attend l'appui sur une touche
	return 0 ;	// fin du programme
}

