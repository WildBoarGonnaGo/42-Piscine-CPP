#include "iter.hpp"
#include <iostream>

class Awesome {
	public:
		Awesome(void) : _n(42) { return ; }
		Awesome(Awesome const &rhs) { *this = rhs; return ; }
		Awesome	&operator=(Awesome const &rhs) { static_cast<void>(rhs); return (*this); }	
		int		get(void) const { return (this->_n); }
	private:
		int	_n;
};

std::ostream	&operator<<(std::ostream &output, Awesome const &rhs)
{
	output << rhs.get();
	return (output);
}

template<typename T>
void			print(T const &x) { std::cout << x << std::endl; return ;}

int				main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter<const int>(tab, 5, print);
	iter<const Awesome>(tab2, 5, print);

	return (0);
}
