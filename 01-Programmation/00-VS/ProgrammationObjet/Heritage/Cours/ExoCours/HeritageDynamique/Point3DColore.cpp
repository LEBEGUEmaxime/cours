#include <iostream>
#include "Point3DColore.h"

using namespace std;

Point3DColore::Point3DColore(float xi, float yi, float zi, int grosseuri, unsigned long couli) : Point3D(xi, yi, zi, grosseuri)
{
	this->couleur = couli;
}

void Point3DColore::affiche()
{
	Point3D::affiche();
	cout << " Couleur= " << this->couleur << " | " << endl;
}
