#include "box.h"




int box::getLength()
{
	return length;
}

int box::getHeight()
{
	return height;
}

int box::getBreadth()
{
	return breadth;
}

long long box::CalculateVolume()
{
	long long Volume;
	Volume = length * height*breadth;
	return Volume;
}

box::box(const box &B)
{
	this->length = B.length;	
	this->breadth = B.breadth;
	this->height = B.height;
}

box::box(int lenght = 0,int height = 0,int breadth=0)
{
	this->length = lenght;
	this->height = height;
	this->breadth = breadth;
}

box::box() 
{

}

box::~box()
{

}

bool box::operator < (box &B)
{
	if (this->length < B.length)
		return true;
	else if (this->length == B.length && this->breadth < B.breadth)
		return true;
	else if (this->height < B.height && this->breadth == B.breadth && this->length == B.length)
		return true;

	else
		return false;
}

std::ostream & operator<<(std::ostream & out, const box & B)
{
	out << B.length << B.breadth << B.height;
	return out;
}
