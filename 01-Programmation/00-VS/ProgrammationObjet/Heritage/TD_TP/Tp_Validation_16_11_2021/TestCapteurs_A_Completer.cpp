/*************************************************
Programme principal à compléter
Au final, l'exécution du programme doit
produire un résultat similaire à l'exécutable fourni
*************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>
#include <vector>

//...

using namespace std; // utilisation de l'espace de nommage standard


/*==============================================
Fonction principale
===============================================*/
int main()
{
	// Prise en compte des accents
	// Il faudra choisir la police de caractères Consolas ou Lucida
	SetConsoleOutputCP(1252);

	//==== Déclaration d'éventuelles variables locales ====
	//...

	// Affichage du nombre de capteurs
	cout << "ETAPE1 : NOMBRE DE CAPTEURS = " << ... << "   (attendu 0)" << endl << endl;

	// Créer un tableau de 20 capteurs de température (modèles de base)
	// Ces  capteurs de temperature  ont des numéros de séries allant de "111101" à "111120"
	// de temperature mini -20.5 et temperature maxi +80.5
	// ...

	// Affichage du nombre de capteurs
	cout << "ETAPE2 : NOMBRE DE CAPTEURS = " << ... << "   (attendu 20)" << endl << endl;

	// Afficher 8 mesures par capteurs (20 lignes de 8 valeurs)
	cout << "CAPTEURS DE TEMPERATURE (MODELE DE BASE) " << endl;
	cout.precision(4);	// 4 digits de précision
	//...

	// Supprimer de la mémoire 10 capteurs
	//...

	// Affichage du nombre de capteurs
	cout << "ETAPE3 : NOMBRE DE CAPTEURS = " << ... << "   (attendu 10)" << endl << endl;

	// Créer 12 capteurs de température extérieure dont les numéros de séries finissent par "5501" à "5512"
	// Les 11 premiers capteurs ont une temperature mini -85.5 et temperature maxi +300.5
	// le dernier capteur a une température mini de -45.5 et maxi de 60.6
	//...

	// Afficher 8 mesures par capteurs (12 lignes de 8 valeurs) et afficher pour chaque capteur s'il est conforme ou non
	cout << "\n\nCAPTEURS DE TEMPERATURE (MODELE EXTERIEUR) " << endl;
	//...

	// Affichage du nombre de capteurs
	cout << "ETAPE4 : NOMBRE DE CAPTEURS = " << ... << "   (attendu 22)" << endl << endl;

	// Supprimer tous les capteurs
	//...

	// Affichage du nombre de capteurs
	cout << "ETAPE5 : NOMBRE DE CAPTEURS = " << ... << "   (attendu 0)" << endl << endl;

	_getch(); // attente d'appui sur une touche
	return 0; // sortie du programme
}