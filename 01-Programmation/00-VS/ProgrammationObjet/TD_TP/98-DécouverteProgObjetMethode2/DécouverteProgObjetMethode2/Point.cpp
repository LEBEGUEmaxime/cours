#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(float xi, float yi)
{
	// On met à jour les attributs x et y de la classe
	this->x = xi;
	this->y = yi;
}

void Point::affiche()
{
	cout << "x = " << this->x << " y = " << this->y << endl;
}

void Point::deplace(float tx, float ty)
{
	this->x += tx;
	this->y += ty;
}
