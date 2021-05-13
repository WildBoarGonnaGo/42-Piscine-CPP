#include "ConvertOutput.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}
	std::string takeIt = static_cast<std::string>(argv[1]);
	ConvertOutput convertIt(takeIt);

	convertIt.charOutput();
	convertIt.intOutput();
	convertIt.floatOutput();
	convertIt.doubleOutput();

	return (0);
}