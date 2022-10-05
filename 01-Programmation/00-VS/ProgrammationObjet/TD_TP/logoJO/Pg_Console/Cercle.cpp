#include "Cercle.h"



CCercle::CCercle(_complex leCentre , double leRayon,unsigned long color)
{
	// Le rôle d'un constructeur est d'initialiser les attributs
	centre = leCentre;
	rayon = leRayon;
    couleur=color;

}

CCercle::CCercle(_complex p1 , _complex p2  )
{
	centre.x=(p1.x + p2.x)/2.0;
	centre.y=(p1.y + p2.y)/2.0;

	double deltaX , deltaY;
	deltaX = abs(p2.x - p1.x) ;
	deltaY = abs(p2.y - p1.y) ;

	if (deltaX >= deltaY) rayon=deltaY/2.0;
	else rayon=deltaX/2.0;

	// ou
	// deltaX >= deltaY ? rayon=deltaY/2.0 : rayon=deltaX/2.0;


}


_complex CCercle::getCentre()
{
	return centre;
}

bool CCercle::dedans(_complex p)
{
	if ((p.x - centre.x)*(p.x - centre.x) + (p.y - centre.y)*(p.y - centre.y) <= rayon*rayon)
		return true;
	else
		return false;
}

double CCercle::getRayon()
{
	return rayon;
}
