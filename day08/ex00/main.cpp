#include "easyfind.hpp"
#include <iostream>

const char	*ReturnIntException::what() const throw()
{
	return ("find value failure: there is no such element");
}

int main(void)
{
	std::list<int>				wildList;
	std::vector<int>			wildVector;

	std::list<int>::iterator		it;
	std::vector<int>::iterator		it2;

	wildVector.push_back(-2);
	wildVector.push_back(10);
	wildVector.push_back(42);
	wildVector.push_back(21);

	for (int i = 0; i < 5; ++i)
		wildList.push_back(i);
	try
	{
		it = easyfind<std::list<int> >(wildList, 2);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		it2 = easyfind<std::vector<int> >(wildVector, 4);
		std::cout << *it2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		it2 = easyfind<std::vector<int> >(wildVector, 42);
		std::cout << *it2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}