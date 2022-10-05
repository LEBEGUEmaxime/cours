#pragma once
#include <iostream>
#include <math.h>

class CCercle; 

class CLogoJO
{
private:
	CCercle* lesCercles[5];
public:
	 CLogoJO(double rayon, double x0 = 0, double y0 = 0);
	 _complex getCentre(int i);
	 double getRayon();
	 unsigned long getCouleur(int i);
	 ~CLogoJO();
};

