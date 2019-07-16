#pragma once
class Stack
{
private:
	int size; //размер массива
	int top; //вершина стека
	int* element; // массив значений  
public:
	int push(int x);// метод добавления элемента
	int  pop(); // метод удаления элемента
	Stack(int size); // констурктор создающий стек заданного размера 
	bool Full(); //  метод проверки на заполненность
	bool Empty(); // метод проверки  на пустоту

	void ShowStack();
	
	 //  метод вывод стека в консоль
	void clear();
	int GetElement(int i);
	// метод очистки стека 
	int GetTop();
	~Stack(); //деструктор по умолчанию
};

