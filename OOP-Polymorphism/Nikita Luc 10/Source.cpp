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
	cout << "Выберите кого вы хотите создать: " << endl;//Проверка работы все методов
	cout << "Человек(введите 1)" << endl;
	cout << "Студент(введите 2)" << endl;
	cout << "Служащий(введите 3)" << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		Man *kek3 = new Man;// исправление на указатель 

		cout << "Введите Имя:" << endl;
		char temp[50];
		cin >> temp;
		kek3->setFirst(temp);
		cout << "Введите Фамилию:" << endl;
		char temp2[50];
		cin >> temp2;
		kek3->setLast(temp2);
		cout << "Введите возраст:" << endl;
		int a;
		cin >> a;
		kek3->SetAge(a);
		cout << "Итог:" << endl;
		cout << kek3->showGeneralInformation();
		cout << endl;
	}
	else if (n == 2) 
	{
		Student *kek2 = new Student;  // исправление на указатель 
		cout << "Введите Имя:" << endl;
		char temp[50];
		cin >> temp;
		kek2->setFirst(temp);
		cout << "Введите Фамилию:" << endl;
		char temp2[50];
		cin >> temp2;
		kek2->setLast(temp2);
		cout << "Введите возраст:" << endl;
		int a;
		cin >> a;
		kek2->SetAge(a);
		cout << "Введите Курс обучения:" << endl;
		int n;
		cin >> n;
		kek2->SetCourse(n);
		cout << "Введите Средний балл:" << endl;
		int k;
		cin >> k;
		kek2->Setmark(k);
		cout << "Введите количество долгов студента:" << endl;
		int c;
		cin >> c;
		kek2->SetDebts(c);
		cout << "Итог:" << endl;
		cout << kek2->showGeneralInformation();
		cout << endl;
	}
	else if (n == 3) 
	{
		
		
  	 Employee *kek=new Employee;// исправление на указатель 
	cout << "Введите Имя:" << endl;
	char temp[50];
	cin >> temp; 
	kek->setFirst(temp);
	cout << "Введите Фамилию:" << endl;
	char temp2[50];
	cin >> temp2;
	kek->setLast(temp2);
	cout << "Введите возраст:" << endl;
	int a;
	cin >> a;
	kek->SetAge(a);
	cout << "Введите должность:" << endl;
	char temp3[50];
	cin >> temp3;
	kek->SetPosition(temp3);
	cout << "Введите обьем заработной платы:" << endl;
	long int k;
	cin >> k;
	kek->SetSalary(k);
	cout << "Введите количество нарушений на рабочем месте:" << endl;
	int l;
	cin >> l;
	kek->SetViolatoins(l);
	cout << "Итог:" << endl;
	cout << kek->showGeneralInformation();
	cout << endl;
	}
	_getch();
	return 0;
}