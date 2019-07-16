#pragma once
#include "Figure.h"
class Rectangle :
	public Figure
{
private:
	double weight;
	double height;
public:
	double getSquare() override;
	double getPerimetr() override;
	void showFigureType() override;
	Rectangle(double height, double weight);
	~Rectangle();
};

