#pragma once

class Tree
{
private:
    
	class node
	{
	public:
		node *pLeft;
		node *pRight;
		int info;

		node(int info = 0, node *pLeft = nullptr,node *pRight=nullptr)
		{
			this->info = info;
			this->pLeft = pLeft;
			this->pRight = pRight;
		}
	};

	node *root;
	int size; 

    node* del(int index, node * temp);
	void showIn(node *temp,int space);

	node* FindMin(node *temp);
	void clear(node * temp);
public:
	int deleteElem(int value);
	void show(int space);
	void AddIn(int x);
	Tree();
	~Tree();
};

