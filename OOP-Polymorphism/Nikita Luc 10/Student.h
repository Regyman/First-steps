#pragma once
#include "Man.h"

#include<iomanip>
using namespace std;

class Student :
	public Man
{
private:
	int Course;//���� ��������
	int mark;//������
	int debts;//����� �������
public:
	int GetMark();//������� � ������� ��� ���� ����� ������
	void Setmark(int n);
	void SetCourse(int b);
	int GetCourse();
	int GetDebts();
	void SetDebts(int c);
   virtual string showGeneralInformation();//����� ������ ���� ����������
	Student();
	~Student();
};

