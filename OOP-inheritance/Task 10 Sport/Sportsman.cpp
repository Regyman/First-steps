#include "Sportsman.h"
#include<string>
using namespace std;



void Sportsman::SetNumber(int NumberOfPrizes)
{
	this->NumberOfPrizes = NumberOfPrizes;
}



int Sportsman::GetPrizes()
{
	return this->NumberOfPrizes;
}

Sportsman::Sportsman(string type, string name, int age,int NumberOfPrizes):Sport(type,name,age)
{
	
	this->NumberOfPrizes = NumberOfPrizes;
}

void Sportsman::ShowAllInfoSpotsman()
{
	cout << "Вид спорта- " << type << endl;
	cout << "Имя- " << name << endl;
	cout << "Возраст- " << age << endl;
	cout << "Общее кол-во наград- " << NumberOfPrizes << endl;
}



Sportsman::Sportsman()
{

}

Sportsman::~Sportsman()
{

}
