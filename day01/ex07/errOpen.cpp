#include "replace.hpp"

void	errOpen(std::string fileStr)
{
	std::cout << "replace: error: " << fileStr
		<< ": " << std::strerror(errno) << std::endl;
	exit(1);
}