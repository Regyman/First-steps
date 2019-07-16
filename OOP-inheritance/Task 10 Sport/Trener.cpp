#include "Trener.h"
#include<string>


int Trener::GetExp()
{
	return this->experience;
}

int Trener::GetNumberOfSportsman()
{
	return this->NumberOfSportsman;
}

void Trener::SetExp(int experience)
{
	this->experience = experience;
}

void Trener::SetNumberOfSportsman(int NumberOfSportsman)
{
	this->NumberOfSportsman = NumberOfSportsman;
}

void Trener::ShowAllInfoTrener()
{
	cout << "Вид спорта- " << type << endl;
	cout << "Имя- " << name << endl;
	cout << "Возраст- " << age << endl;
	cout << "Стаж работы- " << experience << endl;
	cout << "Количество сопртсменов- " << NumberOfSportsman<<endl;
}

Trener::Trener()
{

}

Trener::Trener(string type, string name, int age,int experience,int NumberOfSportsman):Sport(type,name,age)
{
	this->experience = experience;
	this->NumberOfSportsman = NumberOfSportsman;
}


Trener::~Trener()
{

}
