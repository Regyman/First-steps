#include "Tree.h"
#include<iostream>
#include<time.h>
#include<stack>

using namespace std;



int  Tree::deleteElem(int value)
{
	if (root == nullptr)
	{
		return 1;
	}
	else
	{
    root = del(value, root);
	return 0;
	}
}



 Tree::node* Tree::del(int value, node * temp)
{
	
	 /*if (value<temp->info) 
	 {
		 temp->pLeft = del(value, temp->pLeft);
	 }
	 else if (value>=temp->info) 
	 {
		 temp->pRight = del(value, temp->pRight);
	 }
	 else
	 {
		 if (temp->pLeft == nullptr) 
		 {
			 node* current = temp->pRight;
			 delete temp;
			 return current;
		 }
		 else if (temp->pRight == nullptr) 
		 {
			 node* current = temp->pLeft;
			 delete temp;
			 return current;
		 }
		 node* current = FindMin(temp->pRight);

		 temp->info = current->info;

		 temp->pRight = del(temp->info, temp->pRight);
	 }
	 return temp;*/
	/* if (temp == nullptr)
		 return temp;
	 if (temp->pLeft == nullptr) 
	 {
		 if (temp->pRight == nullptr)
			 temp = nullptr;
		 else
			 temp = temp->pRight;
	 }
	 else 
	 {
		 if (temp->pRight == nullptr) 
		 {
			 if (temp->pLeft == nullptr) temp = nullptr;
			 else temp = temp->pLeft;
		 }
	 }*/
	 if (temp == nullptr)
	 {
		 return temp;
	 }
	 if (value < temp->info)
	 {
		 temp->pLeft = del(value , temp->pLeft);
	 }
	 else if (value > temp->info)
	 {
		 temp->pRight = del(value, temp->pRight);
	 }
	 else
	 {
		 if (temp->pLeft == nullptr)
		 {
			 node* temp2 = temp->pRight;
			 free(temp);
			 return temp2;
		 }
		 else if (temp->pRight == nullptr)
		 {
			 node* temp2 = temp->pLeft;
			 free(temp);
			 return temp2;
		 }

		 node* temp2 = FindMin(temp->pRight);

		 temp->info = temp2->info;

		 temp->pRight = del(temp2->info, temp->pRight);
	 }
	 return temp;
}

 void Tree::showIn(node * temp, int space)
 {
	 if (temp == nullptr) 
	 {
        return;
	 }
		
	 space += size;

	 showIn(temp->pRight, space);

	 cout << endl;

	 for (int i = size; i < space; i++)
	 {
		 cout << " ";
	 }
	 cout << temp->info << "\n";

	 showIn(temp->pLeft, space);
 }

void Tree::show(int space)
{
	showIn(root,space);
}

void Tree::AddIn(int x) 
{
	if (size == 0) 
	{
		root = new node(x);
	}
	else
	{
		node* temp = this->root;
		while (true)
		{
			if (x <= temp->info)
			{
				if (temp->pLeft != nullptr)
				{
					temp = temp->pLeft;
				}
				else
				{
					break;
				}
			}
			else
			{
				if (temp->pRight != nullptr)
				{
					temp = temp->pRight;
				}
				else
				{
					break;
				}
			}
		}
		if (temp->info > x)
		{
			temp->pLeft = new node(x);
		}
		else if (temp->info < x)
		{
			temp->pRight = new node(x);
		}
		
	}
	size++;
}
Tree::Tree()
{
	root=nullptr;
		size = 0;
}
Tree::node* Tree::FindMin(node * temp)
{
	node*current = temp;
	while (current->pLeft != nullptr) 
	{
		current = current->pLeft;
	}
	return current;
}

void Tree::clear(node *temp) 
{
	if (temp != nullptr)
	{
		clear(temp->pLeft);
		clear(temp->pRight);
		delete temp;
	}
	
}

Tree::~Tree()
{
	clear(root);
}
