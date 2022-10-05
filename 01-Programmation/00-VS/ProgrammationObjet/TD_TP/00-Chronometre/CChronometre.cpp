#include <windows.h>
#include "CChronometre.h"

CChronometre::CChronometre()
{
	// constructeur
	// le chrono n'est pas lanc� au d�marrage
	this->estLance = false; 
	this->enPause = false;
}

void CChronometre::startStop()
{
	// d�marre ou arr�te le chrono
	if (!this->estLance) // si le chrono n'est pas lanc�
	{
		this->estLance = true;

		// on m�morise le nb de millisecondes �coul�es 
		// depuis le lancement du syst�me
		debut = GetTickCount(); 
	}
	else // si le chrono est lanc�, je l'arr�te
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
		// bloque affichage sans arr�ter le chrono
		memo = GetTickCount() - debut;
		this->enPause = true;
	}
	else
		this->enPause = false;
}
