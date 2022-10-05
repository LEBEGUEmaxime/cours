#pragma once
class CChronometre
{
private:
	// temps écoulé entre le lancement du système et start
	unsigned long debut , memo; 
	bool estLance;	// vaut true si le chrono est lancé
	bool enPause;

public:
	CChronometre();	  // constructeur
	void startStop(); // démarre ou arrête le chrono
	unsigned long getTempsEcoule(); // retourne le temps écoulé
	void pause(); // bloque affichage sans arrêter le chrono
};

