#include<iostream>
#include<conio.h>
#include"list.h"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	int t=0;
	list lst1;

	while (t!=-1)
	{
		cout << "¬ведите элемент который будет внесен в конец списка(дл€ окончани€ введите -1):" << endl;
		cin >> t;
		lst1.push_back(t);
	}
	int t2=0;
	while (t2!=-1)
	{
		cout << "¬ведите элемент который будет добавлен в начало списка(дл€ окончани€ введите -1):" << endl;
		cin >> t2;
		lst1.push_front(t2);
	}
	
	int t3=0;
	while (t3!=-1) 
	{
		cout << "¬ведите элемент который вы хотите добавить в список (дл€ окончани€ введите -1):" << endl;
		cin >> t3;
		int pos;

		cout << "¬ведите позицию на которую вы хотите его добавить:" << endl;
		cin >> pos;
		if (pos > 0)
         lst1.insertAt(t3, pos);
	}
	int pos=0;
	while (pos!=-1)
	{
		cout << "¬ведите номер элемента который вы хотите удалить из списка(дл€ окончани€ введите -1):" << endl;
		cin >> pos;
		if(pos>0)
		lst1.removeAt(pos);
	}
	int t5=1;
	while (t5 ==1)
	{
		cout << "¬ведите 1 чтобы удалить элемент из начала списка(дл€ выхода нажмите любую другую клавишу)" << endl;
		cin >> t5;
		lst1.pop_front();
	}
	int t6=1;
	while(t6==1)
	{
		cout << "¬ведите 1 чтобы удалить элемент из начала списка(дл€ выхода нажмите любую другую клавишу)" << endl;
		cin >> t6;
		lst1.pop_back();
	}
	cout << endl;

	for (int i = 0;i < lst1.GetSize();i++) 
	{
		cout <<"Ёлемент списка номер-"<< i <<" ="<< lst1[i] << endl;
	}

	_getch();
	return 0;
}