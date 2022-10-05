#include <iostream>	// bibliothèque pour la gestion des E/S
#include <vector>
#include "Snir2.h"
using namespace std;

int main()
{
	// *** Solution 1 : colonne 5 algorigramme sur la création des objets
	Etudiant *snir2[15];
	double moyenneGenerale = 0;

	snir2[0] = new Etudiant("DALTON", "Averell", "SNIR2");
	snir2[0]->setMoyenne(2.26);
	snir2[1] = new Etudiant("DALTON", "Jack", "SNIR2");
	snir2[1]->setMoyenne(7.34);
	snir2[2] = new Etudiant("DALTON", "William", "SNIR2");
	snir2[2]->setMoyenne(11.46);
	snir2[3] = new Etudiant("DALTON", "Joe", "SNIR2");
	snir2[3]->setMoyenne(15.24);

	cout << "===SOLUTION 1 === Nombre etudiants = " << Etudiant::getNombreEtudiants() << endl;

	//========== Affichage des étudiants ==========
	for (unsigned i = 0; i < Etudiant::getNombreEtudiants(); i++)
	{
		cout << snir2[i]->getPrenom() << "\t"
			<< snir2[i]->getNom() << "\t"
			<< snir2[i]->getClasse() << "\t"
			<< "Moyenne : " << snir2[i]->getMoyenne() << endl;

		moyenneGenerale += snir2[i]->getMoyenne();
	}

	moyenneGenerale /= Etudiant::getNombreEtudiants();
	cout << "MOYENNE GENERALE = " << moyenneGenerale << endl;

	// Suppression des étudiants
	int memoNombreEtudiants = Etudiant::getNombreEtudiants();
	for (unsigned i = 0; i < memoNombreEtudiants ; i++)
		delete snir2[i];

	cout << "===SOLUTION 1 === Nombre etudiants = " << Etudiant::getNombreEtudiants() << endl << endl;
	
	// *** Solution 2  : Utilisation d'un vecteur
	vector<Etudiant * > lesSnir2;
	lesSnir2.push_back(new Etudiant("DALTON", "Averell", "SNIR2"));
	lesSnir2.push_back(new Etudiant("DALTON", "Jack", "SNIR2"));
	lesSnir2.push_back(new Etudiant("DALTON", "William", "SNIR2"));
	lesSnir2.push_back(new Etudiant("DALTON", "Joe", "SNIR2"));

	cout << "===SOLUTION 2 === Nombre etudiants = " << Etudiant::getNombreEtudiants() << endl;

	// Affectation des moyennes
	lesSnir2[0]->setMoyenne(2.26);
	lesSnir2[1]->setMoyenne(7.34);
	lesSnir2[2]->setMoyenne(11.46);
	lesSnir2[3]->setMoyenne(15.24);

	moyenneGenerale = 0;
	//========== Affichage des étdudiants ==========
	for (unsigned i = 0; i < Etudiant::getNombreEtudiants(); i++)
	{
		cout << lesSnir2[i]->getPrenom() << "\t"
			<< lesSnir2[i]->getNom() << "\t"
			<< lesSnir2[i]->getClasse() << "\t"
			<< "Moyenne : " << lesSnir2[i]->getMoyenne() << endl;

		moyenneGenerale += lesSnir2[i]->getMoyenne();
	}

	moyenneGenerale /= lesSnir2.size();
	cout << "MOYENNE GENERALE = " << moyenneGenerale << endl;

	// Suppression des étudiants
	for (unsigned i = 0; i < lesSnir2.size(); i++)
		delete lesSnir2[i];

	cout << "===SOLUTION 2 === Nombre etudiants = " << Etudiant::getNombreEtudiants() << endl;

	// Test de la classe SNIR2
	Snir2 leBelAlex("BORDONI", "Alexis");
	cout << "Classe du bel Alex = " << leBelAlex.getClasse() << endl;
	leBelAlex.setMoyenne(13.2);
	leBelAlex.setMatierePreferee("Francais");

	cout << "Moyenne du bel Alex = " << leBelAlex.getMoyenne() << endl;
	cout << "Matiere preferee = " << leBelAlex.getMatierePreferee() << endl;

	cin.get(); cin.ignore();
	return 0;
}