#include "identReal.hpp"
#include <iostream>

Base	*generate(void)
{
	int	n = rand() % 3;

	if (!n)
		return (new A);
	else if (n == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *p)
{
	A	*pA;
	B	*pB;
	C	*pC;

	if ((pA = dynamic_cast<A *>(p)))
		std::cout << pA->getClassName() << std::endl;
	else if ((pB = dynamic_cast<B *>(p)))
		std::cout << pB->getClassName() << std::endl;
	else
	{
		pC = dynamic_cast<C *>(p);
		std::cout << pC->getClassName() << std::endl;
	}
		
}

void	identify_from_reference(Base &p)
{

	try 
	{
		A	&ref = dynamic_cast<A &>(p);
		std::cout << ref.getClassName() << std::endl;
		return ;
	}
	catch (std::exception &a)
	{
		try 
		{
			B	&ref = dynamic_cast<B &>(p);
			std::cout << ref.getClassName() << std::endl;
			return ;
		}
		catch (std::exception &b)
		{
			C	&ref = dynamic_cast<C &>(p);
			std::cout << ref.getClassName() << std::endl;
			return ;
		}
	}
}