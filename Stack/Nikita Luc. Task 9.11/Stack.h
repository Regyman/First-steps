#pragma once
class Stack
{
private:
	int size; //������ �������
	int top; //������� �����
	int* element; // ������ ��������  
public:
	int push(int x);// ����� ���������� ��������
	int  pop(); // ����� �������� ��������
	Stack(int size); // ����������� ��������� ���� ��������� ������� 
	bool Full(); //  ����� �������� �� �������������
	bool Empty(); // ����� ��������  �� �������

	void ShowStack();
	
	 //  ����� ����� ����� � �������
	void clear();
	int GetElement(int i);
	// ����� ������� ����� 
	int GetTop();
	~Stack(); //���������� �� ���������
};

