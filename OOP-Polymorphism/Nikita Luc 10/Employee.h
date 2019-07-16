#pragma once
#include "Man.h"
#include<iomanip>

class Employee :
	public Man
{
private:
	long int salary;
	char position[20];
	int violations;
public:
	int GetViolations();//������� � ������� ��� ���� ����� ������
	void SetViolatoins(int n);
	long int GetSalary();
	void SetSalary(int n);
	void SetPosition( const char pos[]);
	char* GetPosition();
   virtual string showGeneralInformation();//����� ������ ���� ����������
	Employee();
	~Employee();
};

