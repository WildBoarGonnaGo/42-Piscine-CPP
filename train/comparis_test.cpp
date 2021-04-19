#include "comParis.class.hpp"
#include <iostream>

int	main(void)
{
	comParis virginWildBoar(21);
	comParis chadCapybro(42);

	std::cout	<< "virginWildBoar.getFoo() = "
		<< virginWildBoar.getFoo() << std::endl;
	std::cout	<< "chadCapybro.getFoo() = "
		<< chadCapybro.getFoo() << std::endl;
	if (virginWildBoar.compare(&chadCapybro) == 1)
		std::cout	<< "virginWildBoar._foo > chadCapybro._foo"
			<< std::endl;
	else if (virginWildBoar.compare(&chadCapybro) == -1)
		std::cout	<< "virginWildBoar._foo < chadCapybro._foo"
			<< std::endl;
	else
		std::cout	<< "virginWildBoar._foo = chadCapybro._foo"
			<< std::endl;
	return (0);
}