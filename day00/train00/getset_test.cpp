#include "GetSet.class.hpp"
#include <iostream>

int	main(void)
{
	GetSet wildboar;

	wildboar.setFoo(42);
	std::cout	<< "new _foo = " << wildboar.getFoo()
				<< std::endl;
	wildboar.setFoo(-20);
	std::cout	<< "new _foo = " << wildboar.getFoo()
				<< std::endl;
	wildboar.setFoo(20);
	std::cout	<< "new _foo = " << wildboar.getFoo()
				<< std::endl;
	return (0);
}