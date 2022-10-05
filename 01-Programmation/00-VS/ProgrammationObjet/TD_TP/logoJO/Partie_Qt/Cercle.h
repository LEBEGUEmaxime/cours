#pragma once

#define _USE_MATH_DEFINES	// pour pouvoir utiliser M_PI
#include <math.h>

class CCercle
{
private:
	_complex centre;
	double rayon;
    unsigned long couleur;
public:
    CCercle(_complex leCentre , double leRayon, unsigned long color=0x00000000);
	CCercle(_complex p1 , _complex p2  );
	_complex getCentre();
	double getRayon();
	bool dedans(_complex p);
    unsigned long getCouleur() {return couleur;}
};

