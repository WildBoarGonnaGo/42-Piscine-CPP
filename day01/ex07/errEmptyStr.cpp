#include "replace.hpp"

void	errEmptyStr(std::string str)
{
	if (str.empty())
	{
		std::cout << "replace: error: one the arguments - "
			<< "is empty string." << std::endl; 
		exit (1);
	}
}