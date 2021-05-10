#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat valeria("Valeria", 0);
	Bureaucrat steven("Steven", 151);
	Bureaucrat david("David", 75);

	std::cout << steven << valeria;
	for (int i = 0; i < 149; ++i)
		valeria.gInc();
	std::cout << valeria;
	valeria.gInc();
	steven.gDec();
	std::cout << david << valeria
		<< steven;
	return (0);
}