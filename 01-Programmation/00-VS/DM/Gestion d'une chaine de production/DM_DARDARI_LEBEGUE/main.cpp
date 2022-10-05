#include <iostream>
#include <conio.h>
#include <string>
#include "TypPieceProd.h"

using namespace std;

int main()
{
	//==========Question 3=============
	cout << "==========QUESTION 3==========\n" << endl;
	TypPieceProd* piece1;
	piece1 = new TypPieceProd("T1", 1, 100, 50, 3);
	piece1->affiche();


	//==========Question 4=============
	cout << endl << "==========QUESTION 4==========\n" << endl;
	TypPieceProd* piece2;
	piece1->afficheRef();
	piece2 = new TypPieceProd("T2", 2, 200, 150, 7);
	piece2->affiche();
	piece2->afficheRef();
	delete piece2;
	piece2->afficheRef();

	//==========Question 5=============
	cout << endl << "==========QUESTION 5==========\n" << endl;
	int i, y = 1,val=1;
	TypPieceProd* piece[30];
	for (i = 0; i < 30; i++)
	{
		string strDebut = "REF";
		string strFin = to_string(val);
		piece[i] = new TypPieceProd(strDebut += strFin, y, 50);
		y = y + 1;
		val = val + 1;
		
	}

	for (i = 0; i < 30; i++)
	{
		piece[i]->affichage();
	}
	piece[30]->afficheRef();

	for (i = 0; i < 30; i++)
	{
		delete piece[i];
	}
	piece[30]->afficheRef();
}