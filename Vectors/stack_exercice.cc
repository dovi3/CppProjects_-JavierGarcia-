#include <stack>
#include <iostream>
#include <string>

void superMerge()
{
	std::stack <int> s1;
	std::stack <int> s2;
	std::stack <int> s3;
	
	s1.push(1);
	s1.push(2);
	s1.push(3);

	s2.push(0);
	s2.push(5);
	s2.push(7);

	while (!s2.empty())
	{

		std::cout << s1.top();
		std::cout << "  ";
		std::cout << s2.top() << std::endl;

		s1.pop();
		s2.pop();
	}
	
	/*if (s1.top() < s2.top()) {

		s2.top() = s3.top();
		s1.top() = s3.top();

		std::cout << "  ";
		std::cout << s3.top() << std::endl;
	}

	s3.pop();*/
}

void putHat()
{

	std::stack <std::string> s1;
	std::stack <std::string> s2;
	std::stack <std::string> s3;

	s1.push("llamas");
	s1.push("te");
	s1.push("como");
	s1.push("hola");

	s2.push("XD");
	s2.push("dos");
	s2.push("salu");
	s2.push("hahaha");

	

	while (!s1.empty()) {

		//std::cout << s1.top() << std::endl;
		s1.pop();
	}

	while (!s2.empty()) {
		//std::cout << s2.top() << std::endl;
		s2.pop();
	}

	while (!s3.empty())
	{
		
		s2 = s3;
		std::cout << s1.top() << s2.top() << std::endl;
		s3.pop();
	}


}


int main()
{
	//superMerge();
	putHat();


}