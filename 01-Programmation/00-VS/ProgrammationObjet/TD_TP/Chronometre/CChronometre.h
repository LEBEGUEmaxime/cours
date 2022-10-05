#pragma once
class CChronometre
{
private:
	// temps �coul� entre le lancement du syst�me et start
	unsigned long debut , memo; 
	bool estLance;	// vaut true si le chrono est lanc�
	bool enPause;

public:
	CChronometre();	  // constructeur
	void startStop(); // d�marre ou arr�te le chrono
	unsigned long getTempsEcoule(); // retourne le temps �coul�
	void pause(); // bloque affichage sans arr�ter le chrono
};

