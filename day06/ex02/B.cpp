#include "B.hpp"

B::B( ) { }

B::~B( ) { }

B::B(B const &ref) {
	*this = ref;
	return ;
}

B	&B::operator=(B const &ref)
{
	static_cast<void>(ref);
	return (*this);
}

char	B::getClassName() const
{
	return ('B');
}