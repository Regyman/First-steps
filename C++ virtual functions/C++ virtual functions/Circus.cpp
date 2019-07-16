#include "Circus.h"
#include<iostream>


double Circus::getSquare()
{
	return radius * radius*3.14;
}

double Circus::getPerimetr()
{
	return 2*3.14*radius;
}

void Circus::showFigureType()
{
	std::cout << "Circle" << std::endl;
}

Circus::Circus(double radius)
{
	this->radius = radius;
}


Circus::~Circus()
{
}
