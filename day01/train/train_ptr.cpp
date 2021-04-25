#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
	int 				a = 10;
	int 				*ptr = &a;
	std::string			ptrStr;
	std::stringstream	iostr;

	iostr << ptr;
	ptrStr = iostr.str();
	std::cout << ptrStr << std::endl;
	return (0);
}