#include "Form.hpp"

int main(void)
{
	Bureaucrat	thomas("Thomas", 100);
	Form		c_28("28C", 150, -50);
	Form		c_29("29C", 1, 160);
	Form		d_28("28D", 0, 150);
	Form		d_29("29D", 160, 1);
	Form		a_28("28A", 110, 34);
	Form		a_29("29A", 90, 50);

	std::cout << c_28 << c_29
		<< d_28 << d_29
		<< a_28 << a_29 << thomas;
	c_28.beSigned(thomas);
	c_29.beSigned(thomas);
	d_28.beSigned(thomas);
	d_29.beSigned(thomas);
	a_28.beSigned(thomas);
	a_29.beSigned(thomas);
	return (0);
}
	