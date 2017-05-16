#pragma once
class myForward_list
{
public:
	myForward_list();
	~myForward_list();

	struct nodo
	{
		
		int value;
		nodo *next;

	};

	nodo *first;
	int front();
	void push_front(int n);
	void pop_front();
	void insert_after(int n, int val);
	void erase_after(int n);
	int size();
	bool isEmpty();


};

