#include "Sport.h"
#include<string>


void Sport::SetName(string name)
{
	this->name = name;
}

void Sport::SetType(string type)
{
	this->type = type;
}

void Sport::SetAge(int age)
{
	this->age = age;
}

void Sport::ShowAllInfoGeneral()
{   
	cout << "Вид спорта- " << type<<endl;
    cout << "Имя- " << name<<endl;
	cout << "Возраст- " << age<<endl;
}

int Sport::GetAge()
{
	return age;
}

string Sport::GetName()
{
	return this->name;
}

string Sport::GetType()
{
	return this->type;
}

Sport::Sport(string type,string name,int age)
{
	this->type = type;
	this->name = name;
	this->age = age;
}

Sport::Sport()
{

}


Sport::~Sport()
{

}
