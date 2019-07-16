#include<iostream>
#include<conio.h>
#include <fstream>
#include"Raz.h"

using namespace std;

void ReadFile(string FileName, const int N, int temp[])
{
	ifstream fs(FileName);

	if (!fs.is_open())
	{
		cout << "���-�� ����� ��� ���";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			fs >> *(temp + i);
		}
	}
	fs.close();
}

 Raz fillMas(const int N, int temp[], Raz mas[])
{
	ReadFile("chisl.txt", N, temp);
	for (int i = 0;i < N;i++) 
	{
      mas[i].setChisl(temp[i]);
	}
        

	ReadFile("znam.txt", N, temp);
	for (int i = 0;i < N;i++) 
	{
     mas[i].setZnam(temp[i]);	
	}
	
	return *mas;
}

void showMas(Raz mas[])
{
	for (int i = 0;i < 20;i++) 
	{
		cout << "������� ������� �����-" << i << " = "<<mas[i].getChisl() <<"/"<<mas[i].getZnam() ;	
		cout << endl;   
	}
		
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int num, num2, result;
	const int N = 20;
	int temp[N];
	Raz mas[N];
	char dei;
	Raz test;

	fillMas(N, temp, mas);

	showMas(mas);

	cout << "������� �����(0-19)  ������ ����� : " << endl;
	cin >> num;
	cout << "������� �����(0-19)  ������ ����� : " << endl;
	cin >> num2;

	Raz i = mas[num], i2 = mas[num2];

	cout << "�������� ��������('+','-','/','*','==')" << endl;
	cin >> dei;

	

	Raz result2;

	switch (dei)
	{
	case '+':
		result2 = mas->sum(i, i2);
		
		cout << "��������� �������� ������:" << endl << result2.getChisl() << "/" << result2.getZnam();
		
		break;
	case '-':
		result2 = mas->razn(i, i2);
		cout << "��������� ��������� ������ ������:" << endl << result2.getChisl() << "/" << result2.getZnam();
		
		break;
	case '/':
		result2 = mas->dev(i, i2);
		cout << "��������� ������� ������:" << endl << result2.getChisl() << "/" << result2.getZnam();
		
		break;
	case'*':
		result2 = mas->comp(i, i2);
		cout << "��������� ��������� ������:" << endl << result2.getChisl() << "/" << result2.getZnam();
		
		break;
	case '==':
		 result = mas->Equal(i, i2);
		switch (result)
	{
	case 1:cout << "������ ����� ������ ������";
		break;
	case -1: cout << "������ ����� ������ ������";
		break;
	case 0:cout << "����� �����";
		break;
	default: cout << "���-�� ����� �� ���";
		break;
	}
		break;
	}

	_getch();
	return 0;
}