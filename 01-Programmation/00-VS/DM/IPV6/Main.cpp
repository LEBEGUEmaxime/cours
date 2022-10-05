#include <iostream>
#include "IPV6.h"
#include "IPV6.cpp"

using namespace std;

int main()
{
	vector<string> address;
	string Ladresse;
	
	cout << "Saisir l'adresse IPV6 : ";
	getline(cin, Ladresse);
	address.push_back(Ladresse);
	cin.seekg(0, ios::end); cin.clear();

	cout << "L'adresse saisie est : ";
	affichage(address);

	cin.ignore();
	return EXIT_SUCCESS;
}