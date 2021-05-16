#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main(void)
{
	std::list<int>						lst1;
	/*
	std::map - C++ version of the hash table
	- dictionary of the assoctiated array. That means
	that i can get the access to IOperation pointer
	with the std::string as a key, which means
	i can use derived classes and subtyping polymorphism
	maps also have iterators*/
	std::map<std::string, IOperation*>	map1;
	/*
	Vector is basically an array that contains exactly
	what we need, first contain do nothing, it's just
	a simple reference
	*/
	std::vector<int>					v1;
	/*The second contains 42 entrances, with value of 100
	by default*/
	std::vector<int>					v2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	//map1["opA"] = new OperationA;
	//map1["opB"] = new OperationB;

	/*
	std::list<int>::const_iterator is basically a stl
	container alternate of pointer
	*/
	std::list<int>::const_iterator	it;
	/*
	lst1.end() isn't a last element, this value meaning
	that we're over the last element and it can be 
	compared with the first iterator
	*/
	std::list<int>::const_iterator	ite = lst1.end();

	for (it = lst1.begin(); it != ite; ++it) {
		std::cout << *it << std::endl;
	}

	return (0);
}