#include <iostream>
#include "Init.class.hpp"

/*
The obvious way to initialize variables is the
way represented below

Init::Init(char val1, int val2, float val3)
{

	this->atr1 = val1;
	this->atr2 = val2;
	this->atr3 = val3;

	std::cout << "Constructor is called" << std::endl;
	std::cout << "this->atr1 = " << this->atr1 << std::endl;
	std::cout << "this->atr2 = " << this->atr2 << std::endl;
	std::cout << "this->atr3 = " << this->atr3 << std::endl;
	return ;
}
But there is also another way to initialize this with a
initializtion list
*/

Init	::Init(char val1, int val2, float val3)
		: atr1(val1), atr2(val2), atr3(val3)
{
	std::cout << "Constructor is called" << std::endl;
	std::cout << "this->atr1 = " << this->atr1 << std::endl;
	std::cout << "this->atr2 = " << this->atr2 << std::endl;
	std::cout << "this->atr3 = " << this->atr3 << std::endl;
	return ;
}

Init::~Init(void)
{
	std::cout << "Destuctor is called" << std::endl;
	return ;
}