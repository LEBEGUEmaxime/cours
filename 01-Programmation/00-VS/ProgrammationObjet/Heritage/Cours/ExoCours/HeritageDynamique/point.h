//******* Point.h ***********

// directives de précompilation pour n'inclure qu'une fois ce fichier
// on peut les remplacer par #pragma once, directive non standard,
// mais supportée par beaucoup de compilateurs dont Visual Studio
#ifndef POINT	//#ifndef et #define Pour inclure les fichier qu'une fois pour eviter d'avoir l'erreur "intrusion multiple"
#define POINT	 

class Point  
{
public:
	void affiche();
	Point(float abs=0,float ord=0);

private:
	float y;
	float x;
};

#endif 