#include "Sample.class.hpp"

int main(void)
{
	Sample rage;
	
	rage.foo = 42;

	std::cout << "Value of rage.foo = " << rage.foo << std::endl;
	rage.bar();
	return (0);
}