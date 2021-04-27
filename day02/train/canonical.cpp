#include "Sample2.hpp"
#include <sstream>

int main(void)
{
	Sample2	inst1;
	Sample2 inst2(42);
	Sample2 inst3(inst1);
	std::cout << inst1 << std::endl;
	std::cout << inst2 << std::endl;
	std::cout << inst3 << std::endl;
	inst3 = inst2;
	std::cout << inst3 << std::endl;
	std::string res = (inst3.getFoo() == inst2.getFoo()) ?
		"True" : "False";
	std::cout << res << std::endl;
	return (0);
}