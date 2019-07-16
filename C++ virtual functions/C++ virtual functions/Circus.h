#pragma once
#include "Figure.h"
class Circus :
	public Figure
{
private:
	double radius;
public:
	double getSquare() override;
	double getPerimetr() override;
	void showFigureType() override;
	Circus(double radius);
	~Circus();
};

