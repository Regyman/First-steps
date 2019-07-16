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
	cout << "��� ������- " << type << endl;
	cout << "���- " << name << endl;
	cout << "�������- " << age << endl;
	cout << "����� ���-�� ������- " << NumberOfPrizes << endl;
}



Sportsman::Sportsman()
{

}

Sportsman::~Sportsman()
{

}
