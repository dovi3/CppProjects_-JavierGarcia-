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
	void pop();
	void push(int num);
	int front();
	bool isEmpty();
	int size();
	myStack (myStack &copia);
	myStack(int *arr);



	myStack();
	~myStack();

};

