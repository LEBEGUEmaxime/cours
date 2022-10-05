#pragma once
#include "CapteurTemperature.h"
class CapteurTemperatureExterieure :
    public CapteurTemperature
{
public:
    CapteurTemperatureExterieure(string derniersChiffresNumeroSerie, double min, double max);
    bool verifieConformite();
};

