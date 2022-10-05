#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point p1(4.5, 7.8);
		p1.affiche();

	Point p2(22);	// Affiche 22 et 0
		p2.affiche();

	Point p3;	// Appelle le constructeur (classe) par defaut. Donc affiche x = 0 , y = 0;
		p3.affiche();

		float abs, ord;
		cout << "Saisir abscisse et ordonnee : ";
		cin >> abs >> ord;

		// On va creer un point avec cette abscisse et cette ordonnée
		// Technique avec la colonne 1 de l'algorigramme
		Point p4(abs, ord);		//L'inconveniant, c'est que le point p3 ne sera détruit du programme, quand on rencontre l'accolade fermante la plus proche (fin du bloc)
			p4.affiche();

		// Technique avec la colonne 2 de l'algorigramme (allocation dynamique)
			Point* p5;
			p5 = new Point(abs, ord);
			p5->affiche();

		// Quand je n'ai plus besoin de p5, je le supprime
			delete p5;

	cin.ignore();
	return EXIT_SUCCESS;
}