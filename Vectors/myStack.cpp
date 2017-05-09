#include "myStack.h"
#include <iostream>



myStack::myStack()
{

}


void myStack::pop()
{
	node *after = first -> next;
	delete first;
	first = after;
}


void myStack::push(int num)
{
	first = nullptr;
	first = new node({num, first});

}


int myStack::front() 
{

}


bool myStack::isEmpty()
{

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


void main() 
{

}