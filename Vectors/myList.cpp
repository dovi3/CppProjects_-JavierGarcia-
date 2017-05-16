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
	if(first == nullptr){

	first = new node({nullptr, n, nullptr});
	last = first;
	}
	//caso 2: cuando ya existe algun nodo en la lista
	else
	{
		node *aux = first->next;
		node *aux2 = last->previous;
		first = new node({nullptr, n, last});
	}
}

void myList::pushBack(int n)
{
	//caso 1: cuando la lista esta vacia
	
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
/*bool myList::isEmpty()
{
	
}*/

myList::myList(myList &copia)
{

}

myList::~myList()
{
	delete first;
	delete last;
}
