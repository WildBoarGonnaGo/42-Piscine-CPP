#include "pointMem.class.hpp"
#include <iostream>

int main(void)
{
	pointMem	inst;
	pointMem	*instp = &inst;

	/*To understand what happens bellow just realize
	that (int pointMem::*) is just a type, just like
	the others, as well as void (pointMem::*)(void) const*/
	int 		pointMem::*addr = NULL;
	void		(pointMem::*func)(void) const;

	addr = &pointMem::foo;

	std::cout << "Value of member foo: " << inst.foo << std::endl;
	inst.*addr = 21;
	std::cout << "Value of member foo: " << inst.foo << std::endl;
	instp->*addr = 42;
	std::cout << "Value of member foo: " << inst.foo << std::endl;

	func = &pointMem::var;
	(inst.*func)();
	(instp->*func)();
	return (0);
}