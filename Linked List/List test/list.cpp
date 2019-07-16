#include "list.h"



void list::push_back(int info)
{
	if (head == nullptr) 
	{
		head = new node(info);
	}

	else 
	{
		node *current = this->head;
		while (current->pNext != nullptr) 
		{
			current = current->pNext;
		}
		current->pNext = new node(info);

	}
	size++;
}

int  list::operator [](const int index) 
{
	int counter = 0;
	node *current = this->head;
	while (current != nullptr) 
	{
		if (counter == index)
			return current->info;

		current = current->pNext;
		counter++;
	}
}

list::list()
{
	size = 0;
	head = nullptr;
}



list::~list()
{
	clear();
}

void list::push_front(int info) 
{
	head = new node(info, head);
	size++;
}

void list::pop_front()
{
	node *temp = head;
	head = head->pNext;
    delete temp;
	size--;
}

int list::GetSize() 
{
	return size;
}

void list::clear()
{
	while (size)
		pop_front();
}

void list::pop_back()
{
	removeAt(size - 1);
}

void list::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		node *previous = this->head;
		for (int i = 0;i < index - 1;i++)
		{
			previous = previous->pNext;
		}

		node *ForDelete = previous->pNext;
		
		previous->pNext = ForDelete->pNext;

		delete ForDelete;
		size--;
	}
}

void list::insertAt(int value, int index)
{
	if (index == 0) 
	{
		push_front(value);
	}
	else 
	{
		node *previous = this->head;
		for (int i = 0;i < index - 1;i++) 
		{
			previous = previous->pNext;
		}
		node *NewEl = new node(value, previous->pNext);
		previous->pNext = NewEl;
	}
	size++;
}


