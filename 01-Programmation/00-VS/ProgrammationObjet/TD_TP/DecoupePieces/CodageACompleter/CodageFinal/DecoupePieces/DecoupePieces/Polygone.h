#pragma once

#include <vector>
#include "Figure.h"
#include "Point2D.h"

using namespace std;

class Point2D;
class Figure;

#define abs(x) ( (x) >=0 ? (x) : -(x) )

class Polygone ............
{
protected:
	vector<Point2D *> lesSommets;
	bool estFerme;

public:
	Polygone(void);
	............ distance( ............);
	void insereUnNouveauSommet(............);
	void fermeLePolygone();
	double getPerimetre();
	double getSurface();

};

