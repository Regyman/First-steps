#include<iostream>
#include<conio.h>
#include<string.h>
#include"Man.h"
#include"Employee.h"
#include"Student.h"
#include<Windows.h>
#include<fstream>
using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "�������� ���� �� ������ �������: " << endl;//�������� ������ ��� �������
	cout << "�������(������� 1)" << endl;
	cout << "�������(������� 2)" << endl;
	cout << "��������(������� 3)" << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		Man *kek3 = new Man;// ����������� �� ��������� 

		cout << "������� ���:" << endl;
		char temp[50];
		cin >> temp;
		kek3->setFirst(temp);
		cout << "������� �������:" << endl;
		char temp2[50];
		cin >> temp2;
		kek3->setLast(temp2);
		cout << "������� �������:" << endl;
		int a;
		cin >> a;
		kek3->SetAge(a);
		cout << "����:" << endl;
		cout << kek3->showGeneralInformation();
		cout << endl;
	}
	else if (n == 2) 
	{
		Student *kek2 = new Student;  // ����������� �� ��������� 
		cout << "������� ���:" << endl;
		char temp[50];
		cin >> temp;
		kek2->setFirst(temp);
		cout << "������� �������:" << endl;
		char temp2[50];
		cin >> temp2;
		kek2->setLast(temp2);
		cout << "������� �������:" << endl;
		int a;
		cin >> a;
		kek2->SetAge(a);
		cout << "������� ���� ��������:" << endl;
		int n;
		cin >> n;
		kek2->SetCourse(n);
		cout << "������� ������� ����:" << endl;
		int k;
		cin >> k;
		kek2->Setmark(k);
		cout << "������� ���������� ������ ��������:" << endl;
		int c;
		cin >> c;
		kek2->SetDebts(c);
		cout << "����:" << endl;
		cout << kek2->showGeneralInformation();
		cout << endl;
	}
	else if (n == 3) 
	{
		
		
  	 Employee *kek=new Employee;// ����������� �� ��������� 
	cout << "������� ���:" << endl;
	char temp[50];
	cin >> temp; 
	kek->setFirst(temp);
	cout << "������� �������:" << endl;
	char temp2[50];
	cin >> temp2;
	kek->setLast(temp2);
	cout << "������� �������:" << endl;
	int a;
	cin >> a;
	kek->SetAge(a);
	cout << "������� ���������:" << endl;
	char temp3[50];
	cin >> temp3;
	kek->SetPosition(temp3);
	cout << "������� ����� ���������� �����:" << endl;
	long int k;
	cin >> k;
	kek->SetSalary(k);
	cout << "������� ���������� ��������� �� ������� �����:" << endl;
	int l;
	cin >> l;
	kek->SetViolatoins(l);
	cout << "����:" << endl;
	cout << kek->showGeneralInformation();
	cout << endl;
	}
	_getch();
	return 0;
}