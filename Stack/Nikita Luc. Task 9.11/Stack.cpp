#include "Stack.h"
#include<iostream>

using namespace std;

Stack::~Stack() //деструктор по умолчанию
{
	clear();
}


int Stack::push(int x) // метод добавления элемента
{
	if (!Full()) // проверка на заполненность стека
	{
		top++; //увеличение размера
		element[top] = x; // присваивание нового значения
		return 0;
	}
	else 
	{ 
		return 1;
	}
}

int  Stack::pop() // метод удаления элемента
{
	if (!Empty())
	{
		element[top--];
		//cout << "Удален  последний элемент стека" << endl; // вывод о срабатывании функции
	}
	else
	{
		return 1;
		//cout << "Удаление элемента из списка невозможно:список пуст" << endl; // вывод о не срабатывании функции
	}
	cout << endl;
}

Stack::Stack(int size) // констурктор создающий стек заданного размера 
{
		this->size = size; // присваивание  полю size в классе введенное значение 
		top = -1; // вершина по  умолчанию 
		element = new int[size]; // создание динамического массива 
}

bool Stack::Full()  //  метод проверки на заполненность
{
	if (top == size - 1) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

bool Stack::Empty()  // метод проверки  на пустоту
{
	if (top == -1) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Stack::ShowStack() //  метод вывод стека в консоль
{
	for (int i = 0;i <= top;i++) // вывод каждого элемента вплоть до вершины в консоль с помощью цикла
	{
		cout << "Элемент стека номер - " << i + 1 << " = " << element[i] << endl;
	}
	cout << endl; //отступ
}

void Stack::clear() // метод очистки стека 
{
	for (int i = 0; i <= size;i++) // выполнение метода pop вплоть до конца стека 
	{
		pop();
	}
}

int Stack::GetElement(int i)
{
	return element[i];
}

int Stack::GetTop()
{
	return 0;
}


