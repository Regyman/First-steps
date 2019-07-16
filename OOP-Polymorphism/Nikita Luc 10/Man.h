#pragma once
#include<iomanip>
#include<sstream>
using namespace std;
class Man
{
protected:
	char FirstName[50];
	char LastName[50];
	int age;

public:
	void SetAge(int a);//Геттеры и сеттеры для всех полей класса
	int GetAge();
	char* getFirst();
	void setFirst( const char First[]);
	char* getLast();
	void setLast(const char Last[]);
	 virtual string showGeneralInformation();//метод вывода всей информации
	Man();
	~Man();
};

