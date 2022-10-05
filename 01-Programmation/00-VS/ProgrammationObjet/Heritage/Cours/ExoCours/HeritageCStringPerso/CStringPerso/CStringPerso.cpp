#include "CStringPerso.h"

CStringPerso::CStringPerso(string init) : string(init)
{
}

void CStringPerso::reverse()
{
	string chaine;

	for (int i = (*this).size() - 1;i >= 0; i--)
	{
		chaine += (*this)[i];
	}

	cout << "La chaine de caractère inversée est : " << "'" << chaine <<"'" << endl;;
}

int CStringPerso::getNBMots()
{
	unsigned i, nb=1;

	for (i = 0; i < (*this).size(); i++)
	{
		if ((*this)[i] == ' ' || (*this)[i] == '\0')
		{
			nb++;
		}
	}
	return nb;
}