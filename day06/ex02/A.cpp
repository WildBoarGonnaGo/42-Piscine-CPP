#include "A.hpp"

A::A( ) { }

A::~A( ) { }

A::A(A const &ref) {
	*this = ref;
	return ;
}

A	&A::operator=(A const &ref)
{
	static_cast<void>(ref);
	return (*this);
}

char	A::getClassName() const
{
	return ('A');
}