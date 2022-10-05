#pragma once
class Point
{
	private:
		float x, y;

	public:
		Point(float xi = 0, float yi = 0);
		void affiche();
		void deplace(float tx, float ty);
};

