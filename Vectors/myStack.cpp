#include "myStack.h"
#include <iostream>



myStack::myStack()
{

}

void myStack::push(int num)
{
	first = nullptr;
	first = new node({num, first });

}

void myStack::pop()
{
	node *after = first->next;
	delete first;
	first = after;
}


int myStack::front() 
{
	return first->element;
}


bool myStack::isEmpty()
{
	return first->next == nullptr;
}


int myStack::size()
{

}


myStack::myStack(myStack &copia)
{

}


myStack::myStack(int *arr) 
{

}


myStack::~myStack()
{

}


