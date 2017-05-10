#pragma once
class myStack
{
public:
	
	struct node
	{
		int element;
		node *next;
	};

	node *first;
	void pop(node *& pila, int &num);
	void push(node *&pila, int num);
	int front();
	bool isEmpty();
	int size();
	myStack (myStack &copia);
	myStack(int *arr);



	myStack();
	~myStack();

};

