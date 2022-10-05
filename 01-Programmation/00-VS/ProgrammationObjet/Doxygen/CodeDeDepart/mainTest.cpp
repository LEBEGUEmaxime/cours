#include <iostream>

#include "Personne.h"
#include "Voiture.h"
#include "Roue.h"
#include "Moteur.h"

using namespace std;

int main()
{
	Personne leChti("AFRITT", "Barack");
	Voiture laNiPonne("TOYOTA Corona", "369323045987", 2.3, 2.1);

	// leChti loue la voiture
	leChti.louer(&laNiPonne);

	cout << "Numero serie =" << leChti.laVoiture->leMoteur->getNumeroSerie()<<endl;
	cout << "Pression Roue AVD" << leChti.laVoiture->lesRoues[1]->getPression() << endl;

	//Regonfler les roues arrière
	leChti.laVoiture->lesRoues[2]->gonfler(2.2);
	leChti.laVoiture->lesRoues[3]->gonfler(2.2);

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}