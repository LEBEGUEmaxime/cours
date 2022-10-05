#include "CapteurTemperature.h"

CapteurTemperature::CapteurTemperature(string numeroSerie, double min, double max)
	:Capteur("TEMP", numeroSerie)
{
	this->temperatureMinAutorisee = min;
	this->temperatureMaxAutorisee = max;
}

double CapteurTemperature::getTemperature()
{
	double alea = rand(), min=0, max=1;
	alea / 32767;
	alea = alea * (max - min);
	alea = (max - min) + min;
	return alea;
}