#include <iostream>
#include <list>
#include <queue>
#include <set>


std::list<int> superMerge(std::list<int>l1, std::list<int>l2)
{
	std::priority_queue<int> Ord;
	std::list <int> result;
	
	for (int a : l1)
	{
		Ord.push(a);
	}


	for (int b : l2)
	{
		Ord.push(b);
	}

	while (!Ord.empty())
	{
		result.push_back(Ord.top());
		Ord.pop();
	}

	return result;
}

void printSupermerge()
{
	std::list <int> l1({ 2, 3, 1, 5, 8 });
	std::list <int> l2({ 7, 1, 9, 4, 10 });

	std::list <int> aux(superMerge(l1, l2));

	for (auto it = aux.begin(); it != aux.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}


std::list <int> change(std::list <int> l1)
{
	int aux;
	int aux1;

	aux = l1.front();
	aux1 = l1.back();

	l1.pop_back();
	l1.pop_front();
	l1.push_front(aux1);
	l1.push_back(aux);

	return l1;
}
void printChange()
{
	std::list <int> l1({ 1, 2, 3, 4, 5, 6 });
	std::list <int> aux(change(l1));

	for (auto it = aux.begin(); it != aux.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}
	
int getElemntPos(std::list <int> l1, int pos)
{
	std::vector <int> vect(l1.begin(), l1.end());

	return vect[pos - 1];

}
void printElementPos()
{
	std::list <int> l1({ 2, 1, 5, 3, 6, 7, 8, 10 });
	int pos;

	std::cout << "que posicion quieres buscar?" << std::endl;
	std::cin >> pos;
	std::cout << getElemntPos(l1, pos);

}

std::list <int> removeDuplicates(std::list<int> l1)
{
	std::set <int> s1;
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{

		s1.insert(*it);

	}
	
	std::list <int> l2;
	for (auto it = s1.begin(); it != s1.end(); ++it)
	{
		l2.push_back(*it);
	}
	return l2;
}
void printRemove()
{

	std::list<int> l1({ 1, 2, 2, 4, 2 });
	std::list <int> l2(removeDuplicates(l1));

	for (auto it = l2.begin(); it != l2.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	

}

std::list <int> removeElements(std::list <int> l1, int num)
{
	std::vector <int> v1(l1.begin(), l1.end());
	std::vector <int> v2(v1);
	int cont = 0;

	for (int i = 0; i < l1.size(); i++)
	{
		if (v1[i] == num) {
			v2.erase(v2.begin() + (i - cont));
			cont++;


		}
	}
	std::list<int> l2(v2.begin(), v2.end());

	return l2;
	
}

void printElements()
{
	std::list<int> l1({1, 2, 3, 3, 4, 5, 5, 5});

}
void main()
{
	
	printSupermerge();
	printChange();
	printElementPos();
	printRemove();
}
