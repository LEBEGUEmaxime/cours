#include "CapteurTemperatureExterieure.h"

CapteurTemperatureExterieure::CapteurTemperatureExterieure(string derniersChiffresNumeroSerie, double min, double max) 
	: CapteurTemperature(derniersChiffresNumeroSerie,min,max)
{
}

bool CapteurTemperatureExterieure::verifieConformite()
{
	if (temperatureMinAutorisee < -50 && temperatureMaxAutorisee > 60)
	{
		return false;
	}
	if (temperatureMaxAutorisee < 60 && temperatureMinAutorisee > -50)
	{
		return true;
	}
}