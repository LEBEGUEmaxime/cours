#pragma once
class Roue
{
private:
	double pression;

public:
	Roue(double pressionOrigine);
	double getPression() { return this->pression; }
	void gonfler(double pression) { this->pression = pression; }

};

