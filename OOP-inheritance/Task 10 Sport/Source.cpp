#include<iostream>
#include<conio.h>
#include<string>
#include<Windows.h>
#include"Sport.h"
#include"Sportsman.h"
#include"Trener.h"
using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Sport  sp1("Volleyball", "John", 32);
	Sportsman kek;
	Sportsman  kek2("Volleyball","John", 32, 5);
	
	cout << "������� ��� ������:" << endl;
	string type1;
	cin >> type1;
	kek.SetType(type1);

	cout << "������� ��� ����������:" << endl;
	string name1;
	cin >> name1;
	kek.SetName(name1);

	cout << "������� �������:" << endl;
	int age1;
	cin >> age1;
	kek.SetAge(age1);
	
	cout << "������� ����� ���������� ������ ����������:" << endl;
	int num1;
	cin >> num1;
	kek.SetNumber(num1);

	kek.ShowAllInfoSpotsman();
	kek2.ShowAllInfoSpotsman();

	_getch();
	return 0;
}