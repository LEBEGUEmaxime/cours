#pragma once
#include <string>
#include <iostream>

using namespace std;

class TypPiece
{
protected:
	string nom;
	int code;

public:
	TypPiece(string str = "", int c = 0);
	string getNom() { return this->nom; }
	int getCode() { return this->code; }
	//============Question 3==============
	void affiche();
};

