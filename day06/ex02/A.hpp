#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
	public:
		A();
		~A();

		A(A const &ref);
		A		&operator=(A const &ref);
		char	getClassName(void) const;
};

#endif