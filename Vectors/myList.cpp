#include "myList.h"
#include <iostream>



myList::myList()
{
	


}

void myList::pushFront()
{
	//caso 1: cuando la lista esta vacia
	last = nullptr;
	first = new node({ first, last });
	//caso 2: cuando ya hay un elemento en la lista
	last = nullptr;
	first = new node({ first, last });
	node *aux = last->first;
	aux = first->last;
}

void myList::pushBack()
{
	//caso 1: cuando la lista esta vacia
	last = nullptr;
	first = new node({ first, last });
	//caso 2: cuando ya hay un elemento en la lista
	last = nullptr;
	first = new node({ first, last });
	node *aux = last->first;
	first = aux->last;
}

void myList::popFront()
{
	//caso 1: cuando en la lista solo hay un elemento
	node *aux = first->last;
	delete first;
	first = aux;
	//caso 2: cuando en la lista hay 2 elementos
	node *aux = first->last;
	delete first;
	first = aux;


}
void myList::popBack()
{
	//caso 1: cuando en la lista solo hay un elemento
	node *aux = first->last;
	delete first;
	first = aux;
}
void myList::size()
{
	
}
bool myList::isEmpty()
{
	return first -> last == nullptr;
}

myList::myList(myList &copia)
{

}

myList::~myList()
{


}
