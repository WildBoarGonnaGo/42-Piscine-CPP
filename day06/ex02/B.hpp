#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
	public:
		B();
		~B();

		B(B const &ref);
		B		&operator=(B const &ref);
		char	getClassName(void) const;
};

#endif