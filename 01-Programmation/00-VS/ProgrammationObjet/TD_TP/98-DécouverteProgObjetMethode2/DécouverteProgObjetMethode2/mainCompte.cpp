#include <iostream>
#include "CCompte.h"
#include <windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1252);
	double init,somme;
	int choix;
	cout << "Saisir le valeur initiale du compte : ";
	cin >> init;

	CCompte cpt1(init);

	cout << "Votre solde est � " << cpt1.donnerSolde() << " euros." << endl;


	// Exemple de menu
	do
	{
		cout << endl;
		cout << "1 : Consulter votre compte " << endl;
		cout << "2 : Cr�diter votre compte " << endl;
		cout << "3 : D�biter votre compte " << endl;
		cout << "4 : Quitter " << endl;
		cin >> choix;

		switch (choix)
		{
		case 1: cout << "Le solde est de : " << cpt1.donnerSolde() << " euros" << endl;
			break;
		case 2: cout << "Quantit� � cr�diter : ";
			cin >> somme;
			if (cpt1.ajouter(somme) == false)
				cout << "ERREUR DE TRANSACTION ";
			else
				cout << "TRANSACTION REUSSIE : Nouveau solde = " << cpt1.donnerSolde() << endl;
			break;
		case 3: cout << "Quantit� � d�biter : ";
			cin >> somme;
			if (cpt1.retirer(somme) == false)
				cout << "ERREURE DE TRANSACTION ";
			else
				cout << "TRANSACION REUSSIE : Nouveau solde = " << cpt1.donnerSolde() << endl;
			break;
		case 4: cout << "Merci bonne journ�e et � bient�t" << endl;
		}

	}while (choix!=4);

	cin.get();
	cin.ignore();
	return EXIT_SUCCESS;
}
