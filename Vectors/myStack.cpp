#include "myStack.h"
#include <iostream>



myStack::myStack()
{

}

void myStack::push(node *&pila, int num)
{
	//creas un nuevo espacio de memoria para el siguiente nodo
	node *newNodo = new node();
	//guardas el valor del nuevo nodo en num
	newNodo->element = num;
	//el puntero del nuevo nodo haces que apunte al siguiente
	newNodo->next = pila;
	pila = newNodo;

}

void myStack::pop(node *& pila, int &num)
{
	node *aux = pila;
	num = aux->element;
	//si queremos eliminar este nodo, pila ha de apuntar al siguiente nodo
	pila = aux->next;
	delete aux;
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