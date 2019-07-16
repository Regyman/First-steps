#pragma once
class list
{
private:

    class node 
	{
	public:
		node *pNext;
		int info;

		node(int info = 0,node *pNext=nullptr)
		{
			this->info = info;
			this->pNext = pNext;
		}
	};

	node *head;
	int size;
	
public:
	
	void push_back(int info);
	int operator[](const int index);
	list();
	~list();
	void push_front(int info);
	void pop_front();
	int GetSize();
	void clear();
	void pop_back();
	void removeAt(int index);
	void insertAt(int value, int index);
};

