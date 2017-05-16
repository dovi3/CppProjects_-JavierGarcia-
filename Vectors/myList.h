#pragma once
class myList
{
public:

	struct node
	{
		node *first;
		node *last;
		int value;
	};


	node *first;
	node *last;
	
	void FirstElement();
	void pushFront();
	void pushBack();
	void popFront();
	void popBack();
	void size();
	bool isEmpty();
	
	myList(myList &copia);

	myList();
	~myList();


};

