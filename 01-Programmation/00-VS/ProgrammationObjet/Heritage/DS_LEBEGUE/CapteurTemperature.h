#pragma once
#include "Capteur.h"
class CapteurTemperature :
    public Capteur
{
protected :
    double temperatureMinAutorisee;
    double temperatureMaxAutorisee;
public:
    CapteurTemperature(string numeroSerie, double min, double max);
    double getTemperature();
};

