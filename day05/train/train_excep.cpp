#include <iostream>

void	

void	foo(int value)
{
	if (value < 0)
	{
		throw value;
	}
	std::cout << "value = " << value << std::endl;
}

int main(void)
{
	try
	{
		foo(-55);
	}
	catch (const int ex)
	{
		std::cout << "Мы поймали " << ex << std::endl;
	}
	return (0);
}