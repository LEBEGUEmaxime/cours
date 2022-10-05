#include <iostream>
#include <math.h>
#include "CLogoJO.h"
#include "Cercle.h"

using namespace std;


int main() {

	double rayon;
	double x0, y0;

	cout << "Saisir le rayon : ";
	cin >> rayon;

	cout << "Saisie des coordonnees du centre du logo : " << endl;
	cout << "Saisir x : ";
	cin >> x0;
	cout << "Saisir y : ";
	cin >> y0;

	CLogoJO logo(rayon, x0, y0);

	for (unsigned i = 0; i < 5; i++) {
		cout << "Coordonnee centre " << i << " = " << dec <<  logo.getCentre(i).x << " " << logo.getCentre(i).y << endl;
		cout << "Couleur du cercle " << i << " = " << hex << logo.getCouleur(i) << endl;
	}


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}