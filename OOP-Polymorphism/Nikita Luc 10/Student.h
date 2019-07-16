#pragma once
#include "Man.h"

#include<iomanip>
using namespace std;

class Student :
	public Man
{
private:
	int Course;//курс обучения
	int mark;//оценки
	int debts;//долги студета
public:
	int GetMark();//Геттеры и сеттеры для всех полей класса
	void Setmark(int n);
	void SetCourse(int b);
	int GetCourse();
	int GetDebts();
	void SetDebts(int c);
   virtual string showGeneralInformation();//метод вывода всей информации
	Student();
	~Student();
};

