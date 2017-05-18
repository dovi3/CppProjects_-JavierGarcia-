#include "myList.h"
#include <iostream>



myList::myList()
{
	first = nullptr;
	last = nullptr;


}

void myList::pushFront(int n)
{
	//caso 1: cuando la lista esta vacia
	node *aux = new node({ first, n, nullptr });
	
	if(first == nullptr){
		last = aux;
	}
	//caso 2: cuando ya existe algun nodo en la lista
	else
	{
		first->previous = aux;
	}
	first = aux;
}

void myList::pushBack(int n)
{
	//caso 1: cuando la lista esta vacia
	node *aux = new node({nullptr, n, last});
	if (first == nullptr) {
		
		first = aux;
	}
	else
	{
		last->next = aux;
	}
	last = aux;
}

void myList::popFront()
{
	if (first != nullptr) {
		node *aux = first->next;
		delete first;
		first = aux;
	}
	
}
void myList::popBack()
{
	if (first != nullptr) {
		node *aux = last->previous;
		delete last;
		last = aux;
	}
}
int myList::size()
{
	int size = 0;
	node *aux = first;

	while (aux != nullptr)
	{
		aux = aux->next;
		size++;
	}

	return size;
	
}
int myList::front()
{
	return first->value;
}
int myList::back()
{
	return last->value;
}
bool myList::isEmpty()
{
	if (first == nullptr)
	{
		return true;
	}

	return false;
	
}

myList::myList(myList &copia)
{
	myList copy = copia;
	while (first != nullptr)
	{
		pushFront(copy.back());
		copy.popBack();
	}
}

void myList::shiftLeft()
{

		popFront();
		pushBack(rand());
	
}
void myList::shiftRight()
{
	
		popBack();
		pushFront(rand());
	
}
void myList::rotateLeft()
{

	if (size() == 1)
	{
		std::cout << "solo hay un elemento";
		
	}
	else
	{
		node *aux = first;
		node *aux1 = first->next;
		node *aux2 = last;
		aux = last;
		aux = aux1;
		aux1 = aux2;
		
		
	}

}
void myList::rotateRight()
{
	if (size() == 1)
	{
		std::cout << "solo hay un elemento";
	}
	else
	{
		node *aux = last;
		node *aux1 = last->previous;
		node *aux2 = first;
		aux = first;
		aux1 = aux;
		aux2 = aux1;
	}
}
void myList::reverse()
{



}
void myList::reverse(int value) 
{




}

myList::~myList()
{
	delete first;
	delete last;
}
