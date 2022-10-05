#include <iostream>
#include <conio.h>	
#include "Point3DColore.h"


using namespace std ;	// espace de nommage standard


int main()
{
	/*Point   p1(2,4);
	Point3D p2(5,7,11,3);

	p1.affiche();
	p2.affiche();
	p2.changeGrosseur(2);
	p2.affiche();*/

	Point3DColore pcoul1;
	pcoul1.affiche();

	Point3DColore pcoul2(2.56, 9.87);
	pcoul2.affiche();

	Point3DColore pcoul3(1.22, 2.44, 3.88, 5, 1789);
	pcoul3.affiche();

	_getch();	// on attend l'appui sur une touche
	return 0 ;	// fin du programme
}

