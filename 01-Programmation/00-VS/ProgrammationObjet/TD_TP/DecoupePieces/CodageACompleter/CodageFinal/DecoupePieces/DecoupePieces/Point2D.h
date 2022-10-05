// Cette classe n'est pas à modifier
#pragma once

class Point2D
{
private:
	double x , y ;

public:
	Point2D(double x=0 , double y=0);
	double getX();
	double getY();
	void setX(double newX);
	void setY(double newY);
};

