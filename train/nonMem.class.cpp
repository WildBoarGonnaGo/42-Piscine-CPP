#include "nonMem.class.hpp"
#include <iostream>

nonMem	::nonMem(void)
{
	std::cout << "Constructor is called" << std::endl;
	++nonMem::_nbInst;
	return ;
}

nonMem	::~nonMem(void)
{
	std::cout << "Destructor is called" << std::endl;
	--nonMem::_nbInst;
	return ;
}

int		nonMem::getNbInst(void)
{
	return (nonMem::_nbInst);
}

int		nonMem::_nbInst = 0;