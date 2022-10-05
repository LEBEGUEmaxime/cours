#include <math.h>
#include "CLogoJO.h"
#include"Cercle.h"

CLogoJO::CLogoJO(double rayon, double x0 , double y0 ) {

	lesCercles[0] = new CCercle({x0- 2*(rayon*1.2), y0}, rayon * 1.2, 0x0000FF);//cercle bleu
	lesCercles[1] = new CCercle({ x0,y0 }, rayon * 1.2, 0x0000000);//cercle noir
	lesCercles[2] = new CCercle({x0+ 2 * (rayon * 1.2) , y0}, rayon * 1.2, 0xFF0000);//cercle rouge
	lesCercles[3] = new CCercle({x0-(rayon*1.2),y0+(rayon*1.2)}, rayon * 1.2, 0xFFFF00);//cercle jaune
	lesCercles[4] = new CCercle({ x0 +(rayon * 1.2),y0 + (rayon * 1.2) }, rayon * 1.2, 0x00FF00);//cercle vert
}

_complex CLogoJO::getCentre(int i) {
	return this->lesCercles[i]->getCentre();
}

double CLogoJO::getRayon() {
	return this->lesCercles[4]->getRayon();
}

unsigned long CLogoJO::getCouleur(int i) {
	return this->lesCercles[i]->getCouleur() ;
}

CLogoJO::~CLogoJO() {
	for (int i = 0; i <= 4; i++) delete lesCercles[i];
}
