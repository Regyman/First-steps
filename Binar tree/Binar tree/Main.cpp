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
	cout << "Выберите действие:" << endl;
	cout << "1.Создать Дерево Вручную" << endl;
	cout << "2.Взять дерево из файла" << endl;
	int choise;
	cin >> choise;
	if (choise == 1) 
	{
    while (n != -1) 
	{
		cout << "Выберите действие:" << endl;
		cout << "1.Добавить элемент " << endl;
		cout << "2.Удалить элемент" << endl;
		cout << "Для показа дерева введите: -1" << endl;
		cin >> n;
		
		{

			if (n == 1)
			{
				cout << "Введите значение которое хотите добавить в дерево:" << endl;
				cin >> x;
				tree.AddIn(x);
				cout << "\nЭлемент: " << x << " -добавлен в дерево" << endl << endl;
			}
			else if (n == 2)
			{
				cout << "Введите значение которые вы хотите удалить из дерева" << endl;
				cin >> x;
				if (tree.deleteElem(x) == 1)
					cout << "Удаление невозможно" << endl;
				else
					cout << "Элемент: " << x << " -удален из дерева" << endl;
			}
			else
				cout << "Выбрано неверное действие " << endl;
		}
	}
	cout << "Итоговое дерево имеет вид:" << endl;
	tree.show(2);
	}
	else if (choise == 2) 
	{

		fstream writeIn;
		cout << "Вы хотите:" << endl;
		cout << "1.Повторно записать числа в файл" << endl;
		cout << "2.Изменить дерево уже лежащее в файле" << endl;
		int c;
		cin >> c;
		if (c == 1)
		{
			writeIn.open("kek.txt", ios::binary | ios::out);
			cout << "Введите кол-во элементов которые вы хотите записать в файл для дальнейшего считывания:" << endl;
			int n, x;
			cin >> n;
			for (int i = 0;i < n;i++)
			{
				cout << "Введите число для добавления:" << endl;
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
			cout << "Дерево лежащее в файле имеет вид:" << endl;
			tree.show(2);
		}
		else if (c == 2)
		{
			int a;
			cout << "Построение по готовому файлу:" << endl;
			writeIn.open("kek.txt", ios::binary | ios::in);
			while (!writeIn.eof())
			{
				writeIn.read((char *)&a, sizeof(a));
				tree.AddIn(a);
				
			}
			writeIn.close();
            cout << "Дерево лежащее в файле имеет вид:" << endl;
		    tree.show(2);
		}
		else
			cout << "Выбрано неверное действие" << endl;
		cout << "Вы хотите его изменить?" << endl;
		cout << "1.Да" << endl;
		cout << "2.Нет" << endl;
		int n2;
		cin >> n2;
		if(n2 == 2) 
		{
			cout << "Итоговое дерево имеет вид:" << endl;
			tree.show(2);
		}
		else if (n2 == 1)
		{
			while (n != -1)
			{
				cout << "Выберите действие:" << endl;
				cout << "1.Добавить элемент " << endl;
				cout << "2.Удалить элемент" << endl;
				cout << "Для показа дерева введите: -1" << endl;
				cin >> n;

				{

					if (n == 1)
					{
						cout << "Введите значение которое хотите добавить в дерево:" << endl;
						cin >> x;
						tree.AddIn(x);
						cout << "\nЭлемент: " << x << " -добавлен в дерево" << endl << endl;
					}
					else if (n == 2)
					{
						cout << "Введите значение которые вы хотите удалить из дерева" << endl;
						cin >> x;
						if (tree.deleteElem(x) == 1)
							cout << "Удаление невозможно" << endl;
						else
							cout << "Элемент: " << x << " -удален из дерева" << endl;
					}
					else
						cout << "Выбрано неверное действие " << endl;
				}
			}
			cout << "Итоговое дерево имеет вид:" << endl;
			tree.show(2);
		}
	}
	else cout << "Выбрано неверное действие" << endl;

	_getch();
	return 0;
}