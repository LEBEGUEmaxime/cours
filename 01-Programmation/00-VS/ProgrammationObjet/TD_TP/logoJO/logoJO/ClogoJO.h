#pragma once

#define _USE_MATH_DEFINES	// pour pouvoir utiliser M_PI
#include <math.h>

class CCercle;

class ClogoJO
{
private:
	CCercle* lesCercles[5];

public:
	ClogoJO(double rayon, double x0 = 0, double y0 = 0);
	_complex getCentre(int i);
	double getRayon();
	unsigned long getCouleur(int i);
	~ClogoJO();
};