#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
	public:
		C();
		~C();

		C(C const &ref);
		C		&operator=(C const &ref);
		char	getClassName(void) const;
};

#endif