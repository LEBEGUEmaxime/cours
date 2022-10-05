//***************** Point3DColore.h ************************
#pragma once    // Pour que le fichier ne soit inclus qu'une fois 
#include "point3D.h"
class Point3DColore :
    public Point3D
{
protected:
    unsigned long couleur;

public:
    Point3DColore(float xi = 1, float yi = 2, float zi = 5, int grosseuri = 3, unsigned long couli = 128);
    void affiche();

private: 

};

