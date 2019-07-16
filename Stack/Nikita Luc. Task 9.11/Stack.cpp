#include "Stack.h"
#include<iostream>

using namespace std;

Stack::~Stack() //���������� �� ���������
{
	clear();
}


int Stack::push(int x) // ����� ���������� ��������
{
	if (!Full()) // �������� �� ������������� �����
	{
		top++; //���������� �������
		element[top] = x; // ������������ ������ ��������
		return 0;
	}
	else 
	{ 
		return 1;
	}
}

int  Stack::pop() // ����� �������� ��������
{
	if (!Empty())
	{
		element[top--];
		//cout << "������  ��������� ������� �����" << endl; // ����� � ������������ �������
	}
	else
	{
		return 1;
		//cout << "�������� �������� �� ������ ����������:������ ����" << endl; // ����� � �� ������������ �������
	}
	cout << endl;
}

Stack::Stack(int size) // ����������� ��������� ���� ��������� ������� 
{
		this->size = size; // ������������  ���� size � ������ ��������� �������� 
		top = -1; // ������� ��  ��������� 
		element = new int[size]; // �������� ������������� ������� 
}

bool Stack::Full()  //  ����� �������� �� �������������
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

bool Stack::Empty()  // ����� ��������  �� �������
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

void Stack::ShowStack() //  ����� ����� ����� � �������
{
	for (int i = 0;i <= top;i++) // ����� ������� �������� ������ �� ������� � ������� � ������� �����
	{
		cout << "������� ����� ����� - " << i + 1 << " = " << element[i] << endl;
	}
	cout << endl; //������
}

void Stack::clear() // ����� ������� ����� 
{
	for (int i = 0; i <= size;i++) // ���������� ������ pop ������ �� ����� ����� 
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


