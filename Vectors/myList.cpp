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
	node *aux = last->previous;
	aux = first->next;
}

void myList::pushBack()
{
	//caso 1: cuando la lista esta vacia
	last = nullptr;
	first = new node({ first, last });
	//caso 2: cuando ya hay un elemento en la lista
	last = nullptr;
	first = new node({ first, last });
	node *aux = last->previous;
	first = aux->next;
}

void myList::popFront()
{
	//caso 1: cuando en la lista solo hay un elemento
	node *aux = first->next;
	delete first;
	first = aux;
	//caso 2: cuando en la lista hay 2 elementos
	


}
void myList::popBack()
{
	//caso 1: cuando en la lista solo hay un elemento
	node *aux = first->next;
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
