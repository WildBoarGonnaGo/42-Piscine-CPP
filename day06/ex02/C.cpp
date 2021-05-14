#include "C.hpp"

C::C( ) { }

C::~C( ) { }

C::C(C const &ref) {
	*this = ref;
	return ;
}

C	&C::operator=(C const &ref)
{
	static_cast<void>(ref);
	return (*this);
}

char	C::getClassName() const
{
	return ('C');
}