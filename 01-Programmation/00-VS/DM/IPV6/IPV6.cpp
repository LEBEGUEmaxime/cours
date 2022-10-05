#include <iostream>
#include "IPV6.h"
using namespace std;

IPV6::IPV6(string adr)
{
	if (adresse.size() != 39 || adresse.size() > 'G' || 'g' || strHextets.size() > 4)
		this->error = getError;
}

vector <string> IPV6::split(const string& s, char c)
{
	vector<string> v;
	unsigned int i = 0;
	unsigned int j = s.find(c);

	while (j < s.length())
	{
		v.push_back(s.substr(i, j - i));
		i = ++j;
		j = s.find(c, j);
		if (j >= s.length())
		{
			v.push_back(s.substr(i, s.length()));
			break;
		}
	}
	return v;
}
void IPV6::suppressionDesZerosDeDebut()
{
	int i, j;
	for (i = 0; i < adresse.size(); i++)
	{
		for (j = 0; j < strHextets.size(); j += 4)
		{
			;
		}
	}
}

void IPV6::remplacementSuiteDeZeros()
{
	int i, j;
	for (i = 0; i < adresse.size(); i++)
	{
		for (j = 0; j < strHextets.size(); j += 4)
		{
			if (strHextets.begin() = 0)
			{
				;
			}
		}
	}
}

void IPV6::reconstructionFinale()
{
	int i, j;
	for (i = 0; i < adresse.size(); i++)
	{
		for (j = 0; j < strHextets.size(); j += 4)
		{
			;
		}
	}
}

void affichage(const vector<string>& leVecteur)
{
	unsigned i;
	for (i = 0; i < leVecteur.size(); i++)
		cout << leVecteur[i];
}