#ifndef SAMPLE2_HPP
# define SAMPLE2_HPP

#include <iostream>

class Sample2
{
	Sample2(void);					//Canonical
	Sample2(int const n);			
	Sample2(Sample2 const &src);	//Canonical
	~Sample2(void)					//Canonical
};

#endif