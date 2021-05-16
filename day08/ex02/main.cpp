#include "mutantstack.hpp"
#include <iostream>

int main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(21);
	mstack.push(42);
	mstack.push(666);
	mstack.push(0);

	MutantStack<int>::iterator			it = mstack.begin();
	MutantStack<int>::iterator			ite = mstack.end();
	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << ' ';
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << std::boolalpha << mstack.empty() << std::endl;
	for ( ; rit != mstack.rend() ; ++rit)
		std::cout << *rit << ' ';
	std::cout << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	MutantStack<int>::const_iterator	cit = mstack.begin();
	MutantStack<int>::reverse_iterator	crit = mstack.rbegin();
	while (cit != mstack.end())
	{
		std::cout << *cit << ' ';
		++cit;
	}
	std::cout << std::endl;
	for ( ; crit != mstack.rend() ; ++crit)
		std::cout << *crit << ' ';
	std::cout << std::endl;
	return (0);
}