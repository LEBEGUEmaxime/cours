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

	Point3DColore* pcoul1;
	pcoul1 = new Point3DColore;
	pcoul1->affiche();
	delete pcoul1;

	pcoul1 = new Point3DColore(1.56, 2.5, 23.56, 500);
	pcoul1->affiche();
	delete pcoul1;

	pcoul1 = new Point3DColore(1.25, 2.3, 24.12, 265, 104);
	pcoul1->affiche();
	delete pcoul1;
	

	_getch();	// on attend l'appui sur une touche
	return 0 ;	// fin du programme
}

