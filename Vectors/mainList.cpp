#include <iostream>
#include "myForward_list.h"
#include "myList.h"


void main()
{
	
	/*myForward_list a;
	a.push_front(5);
	a.push_front(15);
	a.push_front(45);
	a.push_front(2);
	a.push_front(10);
	a.insert_after(2, 60);
	a.pop_front();
	a.erase_after(2);

	int size = a.size();*/

	myList b;
	/*b.pushFront(5);
	b.pushFront(10);*/
	b.pushFront(5);
	b.pushFront(10);
	b.pushFront(20);
	//b.popFront();
	//b.shiftLeft();
	//b.shiftRight();
	b.rotateRight();
}