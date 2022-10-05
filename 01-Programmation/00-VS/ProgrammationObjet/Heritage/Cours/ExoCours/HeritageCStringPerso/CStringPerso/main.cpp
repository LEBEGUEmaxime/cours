#include <iostream>
#include <Windows.h>
#include "CStringPerso.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1256);

	CStringPerso tutu;
	cout << "Le nombre de mot est de : " << tutu.getNBMots() << endl;
	cout << "La phrase avant inversion est : " << tutu << endl;
	tutu.reverse();

	string phrase;
	cout << "\nEntrez une chaine de caractère : ";
	getline(cin,phrase);	// Pour saisir une phrase. Par exemple "Qu'il est beau Mr ROBERT"

	CStringPerso toto(phrase);
	cout << "Le nombre de mot est de : " << toto.getNBMots() << endl;
	toto.reverse();

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}
