#include "Rectangle.h"
#include<iostream>


double Rectangle::getSquare()
{
	return weight*height;
}

double Rectangle::getPerimetr()
{
	return 2*weight+ 2*height;
}

void Rectangle::showFigureType()
{
	std::cout << "Rectangle" << std::endl;
}

Rectangle::Rectangle(double height, double weight)
{
	this->height = height;
	this->weight = weight;
}



Rectangle::~Rectangle()
{
}
