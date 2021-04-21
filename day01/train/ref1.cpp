#include <iostream>

int main(void)
{
	int	SanicBalls = 42;

	int	*ptrSanic = &SanicBalls;
	int	&refSanic = SanicBalls;
	/*You can't initialize empty reference variable
	More than tha reference variable is initialize once
	until the end program. So the line represented below
	
	int	&refSanic2;
	
	is NOT allowed*/

	std::cout << "SanicBalls = " << SanicBalls << std::endl;
	std::cout << "*ptrSanic = " << *ptrSanic << std::endl;
	std::cout << "&refSanic = " << refSanic << std::endl;
	*ptrSanic = 21;
	std::cout << "SanicBalls (after *ptrSanic = 21) = " << SanicBalls << std::endl;
	refSanic = 84;
	std::cout << "SanicBalls (after refSanic = 84) = " << SanicBalls << std::endl;
	return (0);
}