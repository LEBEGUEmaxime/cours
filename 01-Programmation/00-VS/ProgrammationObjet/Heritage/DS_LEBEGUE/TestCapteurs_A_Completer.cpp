/*************************************************
Programme principal � compl�ter
Au final, l'ex�cution du programme doit
produire un r�sultat similaire � l'ex�cutable fourni
*************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // biblioth�que de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>
#include <vector>
#include "CapteurTemperatureExterieure.h"

using namespace std; // utilisation de l'espace de nommage standard


/*==============================================
Fonction principale
===============================================*/
int main()
{
	// Prise en compte des accents
	// Il faudra choisir la police de caract�res Consolas ou Lucida
	SetConsoleOutputCP(1252);

	//==== D�claration d'�ventuelles variables locales ====
	Capteur* leCapteur;
	int i, j, c = 1, val = 1;
	string strDebut;
	string strFin;

	// Affichage du nombre de capteurs
	cout << "ETAPE1 : NOMBRE DE CAPTEURS = " << leCapteur->getNombreCapteurs() << "   (attendu 0)" << endl << endl;

	// Cr�er un tableau de 20 capteurs de temp�rature (mod�les de base)
	CapteurTemperature* lesCapteurs[20];
	// Ces  capteurs de temperature  ont des num�ros de s�ries allant de "111101" � "111120"
	// de temperature mini -20.5 et temperature maxi +80.5

	for (i = 0; i < 10; i++)
	{
		strDebut = "11110";
		strFin = to_string(val);
		lesCapteurs[i] = new CapteurTemperature(strDebut += strFin, -20.5, 80.5);
		val = val + 1;
	}

	for (i = 10; i < 20; i++)
	{
		strDebut = "1111";
		strFin = to_string(val);
		lesCapteurs[i] = new CapteurTemperature(strDebut += strFin, -20.5, 80.5);
		val = val + 1;
	}

	// Affichage du nombre de capteurs
	cout << "ETAPE2 : NOMBRE DE CAPTEURS = " << lesCapteurs[20]->getNombreCapteurs() << "   (attendu 20)" << endl << endl;

	// Afficher 8 mesures par capteurs (20 lignes de 8 valeurs)
	cout << "CAPTEURS DE TEMPERATURE (MODELE DE BASE) " << endl;
	cout.precision(4);	// 4 digits de pr�cision
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 8; j++)
		{
			cout << "Les valeurs sont pour le capteur " << c << " de " << lesCapteurs[i]->getTemperature() << endl;
		}
		c++;
	}

	// Supprimer de la m�moire 10 capteurs
	for (i = 0; i < 10; i++)
	{
		delete lesCapteurs[i];
	}

	// Affichage du nombre de capteurs
	cout << "ETAPE3 : NOMBRE DE CAPTEURS = " << lesCapteurs[10]->getNombreCapteurs() << "   (attendu 10)" << endl << endl;

	// Cr�er 12 capteurs de temp�rature ext�rieure dont les num�ros de s�ries finissent par "5501" � "5512"
	// Les 11 premiers capteurs ont une temperature mini -85.5 et temperature maxi +300.5
	// le dernier capteur a une temp�rature mini de -45.5 et maxi de 60.6
	val = 1;
	for (i = 0; i < 10; i++)
	{
		strDebut = "550";
		strFin = to_string(val);
		lesCapteurs[i] = new CapteurTemperature(strDebut += strFin, -85.5, 300.5);
		val = val + 1;
	}
	for (i = 10; i < 12; i++)
	{
		strDebut = "55";
		strFin = to_string(val);
		lesCapteurs[i] = new CapteurTemperature(strDebut += strFin, -85.5, 300.5);
		val = val + 1;
	}

	lesCapteurs[12] = new CapteurTemperature(strDebut += strFin, -45.5, 60.6);

	// Afficher 8 mesures par capteurs (12 lignes de 8 valeurs) et afficher pour chaque capteur s'il est conforme ou non
	cout << "\n\nCAPTEURS DE TEMPERATURE (MODELE EXTERIEUR) " << endl;
	c = 1;
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 8; j++)
		{
			cout << "Les valeurs sont pour le capteur " << c << " de " << lesCapteurs[i]->getTemperature() << endl;
		}
		c++;
	}

	// Affichage du nombre de capteurs
	cout << "ETAPE4 : NOMBRE DE CAPTEURS = " << lesCapteurs[i]->getNombreCapteurs() << "   (attendu 22)" << endl << endl;

	// Supprimer tous les capteurs
	delete lesCapteurs;

	// Affichage du nombre de capteurs
	cout << "ETAPE5 : NOMBRE DE CAPTEURS = " << lesCapteurs[i]->getNombreCapteurs() << "   (attendu 0)" << endl << endl;

	_getch(); // attente d'appui sur une touche
	return 0; // sortie du programme
}