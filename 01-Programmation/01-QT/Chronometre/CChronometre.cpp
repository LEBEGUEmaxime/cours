#include <windows.h>
#include "CChronometre.h"

CChronometre::CChronometre()
{
	// constructeur
	// le chrono n'est pas lancé au démarrage
	this->estLance = false; 
	this->enPause = false;
}

void CChronometre::startStop()
{
	// démarre ou arrête le chrono
	if (!this->estLance) // si le chrono n'est pas lancé
	{
		this->estLance = true;

		// on mémorise le nb de millisecondes écoulées 
		// depuis le lancement du système
		debut = GetTickCount(); 
	}
	else // si le chrono est lancé, je l'arrête
	{
		this->estLance = false;
	}

}

unsigned long CChronometre::getTempsEcoule()
{
	if (this->estLance)
	{
		if (this->enPause)
			return memo;
		else
			return GetTickCount() - debut;
	}
		
	else
		return 0;
}

void CChronometre::pause()
{
	if (! this->enPause)
	{
		// bloque affichage sans arrêter le chrono
		memo = GetTickCount() - debut;
		this->enPause = true;
	}
	else
		this->enPause = false;
}
