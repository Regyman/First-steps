#include "Raz.h"
#include<iostream>

using namespace std;

void Raz::show()
{
	cout << chisl << "/" << znam;
}

int Raz::Equal(Raz i, Raz i2)
{

	i.chisl *= i2.znam;
	i.znam *= i2.znam;

	int temp;
	temp = i.znam / i2.znam;
	i2.chisl *= temp;
	i2.znam *= temp;

	if (i.chisl > i2.chisl)
	{
		return 1;
	}

	if (i.chisl < i2.chisl)
	{
		return -1;
	}

	if (i.chisl == i2.chisl)
	{
		return 0;
	}

}

 Raz Raz::sum(Raz i, Raz i2)
 {
	 int temp;
	 temp = i.znam;
	 i.chisl *= i2.znam;
	 i.znam *= i2.znam;

	 i2.chisl *= temp;
	 i2.znam *= temp;

	 Raz i3;
	 i3.chisl = i.chisl + i2.chisl;
	 i3.znam = i.znam;
	 return i3;
 }

 Raz Raz::razn(Raz i, Raz i2)
 {
	 int temp;
	 temp = i.znam;
	 i.chisl *= i2.znam;
	 i.znam *= i2.znam;

	 i2.chisl *= temp;
	 i2.znam *= temp;
	 
	 Raz i3;
	 i3.chisl = i.chisl - i2.chisl;
	 i3.znam = i.znam;
	 return i3;
 }

 Raz Raz::comp(Raz i, Raz i2)
 {
	 Raz i3;

	 i3.chisl = i.chisl*i2.chisl;
	 i3.znam = i2.znam*i.znam;
	 return i3;
 }

 Raz Raz::dev(Raz i, Raz i2)
 {	
	 Raz i3;

	 i3.chisl = i.chisl*i2.znam;
	 i3.znam = i.znam*i2.chisl;
	 return i3;
 }

Raz::Raz()
{

}

Raz::~Raz()
{

}

Raz::Raz(int chisl,int znam) 
{
	this->chisl = chisl;
	this->znam = znam;
}

int Raz::getZnam() 
{
	return this->znam;
}

int Raz::getChisl()
{
	return this->chisl;
}

void Raz::setChisl(int chisl) 
{
	this->chisl = chisl;
}

void Raz::setZnam(int znam) 
{
	this->znam = znam;
}
