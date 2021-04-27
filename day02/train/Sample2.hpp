#ifndef SAMPLE2_HPP
# define SAMPLE2_HPP

#include <iostream>

class Sample2
{
	public:

		Sample2(void);					//Canonical
		Sample2(int const n);			
		Sample2(Sample2 const &src);	//Canonical
		~Sample2(void);					//Canonical

		Sample2	&operator=(Sample2 const &rhs); //Canonical
		int		getFoo( void ) const;

	private:
		int		_foo;
};

std::ostream	&operator<<(std::ostream &o, Sample2 const &i);

#endif