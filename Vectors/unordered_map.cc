#include <deque>
#include <queue>
#include <iostream>
#include <vector>

void main()
{

		std::deque<float> prices(10.0, 10.50);

		//Cambia el ultimo elemento de 10.5 a 32.43
		prices[prices.size() - 1] = 32.43; 

		//Borra el primer elemento
		prices.pop_front();

		std::deque <float> d1(prices);
		d1.push_front(5.64);
		d1.push_front(20.31);
		d1.insert(d1.begin() + 1, 10);

		//primera deque
		

		/*std::cout << "Primera deque: " << std::endl;
		for (int i = 0; i < prices.size(); i++)
			std::cout << prices[i] << std::endl;
		std::cout << "Segunda deque: " << std::endl;
		for (int i = 0; i < d1.size(); i++)
			std::cout << d1[i] << std::endl;*/

		std::cout << "Primera deque: " << std::endl;
		for (auto it = prices.rbegin(); it != prices.rend(); ++it) {
			std::cout << *it << std::endl;
		}

		//segunda deque
		std::cout << "Segunda deque: " << std::endl;

		for (auto it = d1.begin(); it != d1.end(); ++it) {
			std::cout << *it << std::endl;
		}


		//VECTORES
		std::cout << std::endl;
		std::vector<float> prices1(10.0, 10.50);

		//Cambia el ultimo elemento de 10.5 a 32.43
		prices1[prices1.size() - 1] = 32.43;

		//Borra el primer elemento
		prices1.erase(prices1.begin());

		std::vector <float> d2(prices1);
		d2.insert(d2.begin(),5.64);
		d2.insert(d2.begin(),20.31);
		d2.insert(d2.begin() + 1, 10);

		

		/*std::cout << "vectores" << std::endl;
		std::cout << "Primer vector: " << std::endl;
		for (int i = 0; i < prices1.size(); i++)
			std::cout << prices1[i] << std::endl;
		std::cout << "Segundo vector: " << std::endl;
		for (int i = 0; i < d2.size(); i++)
			std::cout << d2[i] << std::endl;*/

		std::cout << "Primer vector: " << std::endl;
		for (auto it = prices1.rbegin(); it != prices1.rend(); ++it)
			std::cout << *it << std::endl;
		std::cout << "Segundo vector: " << std::endl;
		for (auto it = d2.begin(); it != d2.end(); ++it)
			std::cout << *it << std::endl;


		//EJERCICIO 3
		//SuperMergeP

		std::priority_queue<int>Q1;
		std::priority_queue<int>Q2;
		std::priority_queue<int>Q3;

		//ConcatQueue
		std::queue<std::string> con1;
		std::queue<std::string> con2;







		










}