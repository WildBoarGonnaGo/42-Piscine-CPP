#include <iostream>
#include <string>

void	outputRef(std::string &ptr)
{
	std::cout << "this is pointer string: "
		<< ptr << std::endl;
}

void	outputPtr(std::string *ptr)
{
	std::cout << "this is reference string: "
		<< *ptr << std::endl;
}

int main(void)
{
	std::string	brain = "HI THIS IS BRAN";

	outputRef(brain);
	outputPtr(&brain);
	return (0);
}