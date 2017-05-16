#include "myForward_list.h"



myForward_list::myForward_list()
{
	first = nullptr;
}

int myForward_list::front()
{
	return first->value;
}
void myForward_list::push_front(int n)
{
	if (first == nullptr) {

		nodo* newNode = new nodo({ n, nullptr });
		first = newNode;
	}
	else
	{
		nodo* nuevoNodo = new nodo({ n, first });
		first = nuevoNodo;
	}
}
void myForward_list::pop_front()
{
	nodo *aux = first->next;
	delete first;
	first = aux;
}
void myForward_list::insert_after(int n, int val)
{
	nodo *newNode = first;
	for (int i = 0; i < n; ++i)
	{
		newNode = newNode->next;
	}
	nodo *aux = newNode->next;
	newNode->next = new nodo({val, aux});
}

void myForward_list::erase_after(int n)
{
	nodo *newNode = first;
	nodo *newNode2 = first;
	for (int i = 0; i < n; ++i)
	{
		newNode = newNode->next;
		newNode2 = newNode2->next;
	}
	newNode2 = newNode2->next;
	newNode2 = newNode2->next;
	delete newNode->next;
	newNode->next = newNode2;
}

int myForward_list::size()
{
	int size = 0;
	nodo *aux = first;

	while (aux != nullptr)
	{
		aux = aux->next;
		size++;
	}

	return size;
}

bool myForward_list::isEmpty()
{
	if (first == nullptr)
	{
		return true;
	}

	return false;
		
}

myForward_list::~myForward_list()
{
	delete first;
}
