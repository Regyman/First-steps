#include "Man.h"
#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

void Man::SetAge(int a)
{
	age = a;
}

int Man::GetAge()
{
	return age;
}

char* Man::getFirst()
{
	return FirstName;
}

void Man::setFirst( const char First[])
{
	strcpy_s(FirstName, First);
}


char* Man::getLast()
{
	return LastName;
}

void Man::setLast(const char Last[])
{
	strcpy_s(LastName,Last);
}


string Man::showGeneralInformation()
{
	return string(FirstName) + "  " + string(LastName) + " - " + to_string(age);
}

Man::Man()
{

}


Man::~Man()
{

}
