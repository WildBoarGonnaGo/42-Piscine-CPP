#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed( ) : _fixedPoint(0)
{
	std::cout << "Default constructor called"
		<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const &refInst)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = refInst;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &reInst)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = reInst.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const reFixed)
{
	this->_fixedPoint = reFixed;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

Fixed::~Fixed( )
{
	std::cout << "Destructor called" << std::endl;
}

int const	Fixed::_fractBit = 8;