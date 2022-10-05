#include <math.h>
#include "ClogoJO.h"
#include "Cercle.h"



ClogoJO::ClogoJO(double rayon, double x0 = 0, double y0 = 0)
{
	// On crée les cercles
	this->lesCercles[0] = new CCercle(, );
	this->lesCercles[1] = new CCercle(, );
	this->lesCercles[2] = new CCercle(, );
	this->lesCercles[3] = new CCercle(, );
	this->lesCercles[4] = new CCercle(, );
}

_complex ClogoJO::getCentre(int i)
{
	return lesCercles[i]->getCentre();
}

double ClogoJO::getRayon()
{

}

unsigned long ClogoJO::getCouleur(int i)
{

}

ClogoJO::~ClogoJO()
{

}
