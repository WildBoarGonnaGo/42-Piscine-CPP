#include "span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand(time(NULL));
	Span				sp = Span(5);
	Span				bigNums(11000);
	Span				littleNums(200);
	Span				testStack(21);
	std::vector<int>	pop(5, rand() % 43);
	std::vector<int>	cat(5, rand() % 43);
	std::vector<int>	kebab(5, rand() % 43);
	std::vector<int>	konoDioDa(5, rand() % 43);
	int					nyacat [5];

	for (int i = 0; i < 11001; ++i)
	{
		try
		{
			bigNums.addNumber(rand() % 20000);
			std::cout << bigNums.getRange()[i];
			(((i + 1) % 10)) ? std::cout << ' ' : std::cout << std::endl; 
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}

	std::cout << std::endl << bigNums.shortestSpan() << std::endl;
	std::cout << bigNums.longestSpan() << std::endl << std::endl;

	for (int i = 0; i < 200; ++i)
	{
		littleNums.addNumber(rand() % 300);
		std::cout << littleNums.getRange()[i];
		(((i + 1) % 10)) ? std::cout << ' ' : std::cout << std::endl; 
	}

	std::cout << std::endl << littleNums.shortestSpan() << std::endl;
	std::cout << littleNums.longestSpan() << std::endl << std::endl;

	testStack.addNumber(pop);
	testStack.addNumber(cat);
	testStack.addNumber(kebab);
	
	for (int i = 0; i < 5; ++i)
		nyacat[i] = rand() % 20 + 5;
	
	testStack.addNumber(nyacat, 5);
	for (int i = 0; i < 20; ++i)
	{
		std::cout << testStack.getRange()[i];
		(((i + 1) % 10)) ? std::cout << ' ' : std::cout << std::endl; 
	}

	std::cout << std::endl << testStack.shortestSpan() << std::endl;
	std::cout << testStack.longestSpan() << std::endl;

	try
	{
		testStack.addNumber(konoDioDa);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span				oneNum(1);

	oneNum.addNumber(1);
	try
	{
		std::cout << oneNum.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Span				zeroNum(0);
	try
	{
		zeroNum.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << zeroNum.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}