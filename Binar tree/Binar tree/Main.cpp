#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"Tree.h"
#include<fstream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	Tree tree;
	int n=0,n2=0,x;
	cout << "�������� ��������:" << endl;
	cout << "1.������� ������ �������" << endl;
	cout << "2.����� ������ �� �����" << endl;
	int choise;
	cin >> choise;
	if (choise == 1) 
	{
    while (n != -1) 
	{
		cout << "�������� ��������:" << endl;
		cout << "1.�������� ������� " << endl;
		cout << "2.������� �������" << endl;
		cout << "��� ������ ������ �������: -1" << endl;
		cin >> n;
		
		{

			if (n == 1)
			{
				cout << "������� �������� ������� ������ �������� � ������:" << endl;
				cin >> x;
				tree.AddIn(x);
				cout << "\n�������: " << x << " -�������� � ������" << endl << endl;
			}
			else if (n == 2)
			{
				cout << "������� �������� ������� �� ������ ������� �� ������" << endl;
				cin >> x;
				if (tree.deleteElem(x) == 1)
					cout << "�������� ����������" << endl;
				else
					cout << "�������: " << x << " -������ �� ������" << endl;
			}
			else
				cout << "������� �������� �������� " << endl;
		}
	}
	cout << "�������� ������ ����� ���:" << endl;
	tree.show(2);
	}
	else if (choise == 2) 
	{

		fstream writeIn;
		cout << "�� ������:" << endl;
		cout << "1.�������� �������� ����� � ����" << endl;
		cout << "2.�������� ������ ��� ������� � �����" << endl;
		int c;
		cin >> c;
		if (c == 1)
		{
			writeIn.open("kek.txt", ios::binary | ios::out);
			cout << "������� ���-�� ��������� ������� �� ������ �������� � ���� ��� ����������� ����������:" << endl;
			int n, x;
			cin >> n;
			for (int i = 0;i < n;i++)
			{
				cout << "������� ����� ��� ����������:" << endl;
				cin >> x;
				writeIn.write((char*)(&x), sizeof(x));
			}
			writeIn.close();
			writeIn.open("kek.txt", ios::binary | ios::in);
			int a;
			while (!writeIn.eof())
			{
				writeIn.read((char *)&a, sizeof(a));
				tree.AddIn(a);
			}
			writeIn.close();
			cout << "������ ������� � ����� ����� ���:" << endl;
			tree.show(2);
		}
		else if (c == 2)
		{
			int a;
			cout << "���������� �� �������� �����:" << endl;
			writeIn.open("kek.txt", ios::binary | ios::in);
			while (!writeIn.eof())
			{
				writeIn.read((char *)&a, sizeof(a));
				tree.AddIn(a);
				
			}
			writeIn.close();
            cout << "������ ������� � ����� ����� ���:" << endl;
		    tree.show(2);
		}
		else
			cout << "������� �������� ��������" << endl;
		cout << "�� ������ ��� ��������?" << endl;
		cout << "1.��" << endl;
		cout << "2.���" << endl;
		int n2;
		cin >> n2;
		if(n2 == 2) 
		{
			cout << "�������� ������ ����� ���:" << endl;
			tree.show(2);
		}
		else if (n2 == 1)
		{
			while (n != -1)
			{
				cout << "�������� ��������:" << endl;
				cout << "1.�������� ������� " << endl;
				cout << "2.������� �������" << endl;
				cout << "��� ������ ������ �������: -1" << endl;
				cin >> n;

				{

					if (n == 1)
					{
						cout << "������� �������� ������� ������ �������� � ������:" << endl;
						cin >> x;
						tree.AddIn(x);
						cout << "\n�������: " << x << " -�������� � ������" << endl << endl;
					}
					else if (n == 2)
					{
						cout << "������� �������� ������� �� ������ ������� �� ������" << endl;
						cin >> x;
						if (tree.deleteElem(x) == 1)
							cout << "�������� ����������" << endl;
						else
							cout << "�������: " << x << " -������ �� ������" << endl;
					}
					else
						cout << "������� �������� �������� " << endl;
				}
			}
			cout << "�������� ������ ����� ���:" << endl;
			tree.show(2);
		}
	}
	else cout << "������� �������� ��������" << endl;

	_getch();
	return 0;
}