/*==================	
	Fiche C++ n°1	
====================*/
#include <iostream> 

using namespace std;

class Point
{
	private:	// Pas accessible depuis l'extérieur de la classe
		float x, y;

	public:	// accessible depuis l'extérieure de la classe
		Point(float xi, float yi)
		{
			this->x = xi;	// This-> est facultatif mais permet de
			this->y = yi;
		}

		void affiche()
		{
			cout << "x = " << x << " y = " << y << endl;
		}

		void setX(float newX)	// On change le x, qui normalement est privé !
		{
			x = newX;
		}

		float getX()
		{
			return x;
		}


};	// Fin de la classe
/*========================
	Fonction principale
==========================*/
int main()
{
	Point p1(7,4);
	p1.affiche();

	p1.setX(19);	// On remplace x par 19
	p1.affiche();

	cout << "x = " << p1.getX() << endl;

	cin.ignore();
	return EXIT_SUCCESS;
}