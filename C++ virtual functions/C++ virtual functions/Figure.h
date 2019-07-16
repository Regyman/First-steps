#pragma once
class Figure
{

public:
	virtual double getSquare() = 0;
	virtual double getPerimetr() = 0;
	virtual void showFigureType() = 0;
	Figure();
	~Figure();
};

