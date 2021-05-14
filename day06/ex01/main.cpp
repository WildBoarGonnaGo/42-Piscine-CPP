#include "serialize.hpp"
#include <ctime>
#include <iostream>

int main(void)
{
	srand(time(NULL));
	void	*rawSample;
	Data	*result;
	
	rawSample = serialize();
	result = deserialize(rawSample);

	std::cout << "startStr = " << result->startStr << std::endl;
	std::cout << "midInt = " << result->midInt << std::endl;
	std::cout << "finStr = " << result->finStr << std::endl;

	delete reinterpret_cast<char *>(rawSample);
	delete result;

	return (0);
}