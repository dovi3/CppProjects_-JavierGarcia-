#pragma once
class myList
{
public:

	struct node
	{
		node *next;
		int value;
		node *previous;
		
	};


	node *first;
	node *last;
	
	
	void pushFront(int n);
	void pushBack(int n);
	void popFront();
	void popBack();
	void size();
	//bool isEmpty();
	
	myList(myList &copia);

	myList();
	~myList();


};

