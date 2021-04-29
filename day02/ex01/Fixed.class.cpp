#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

#define EPSILON 0.5e-2

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
	this->_fixedPoint = reInst._fixedPoint;
	return (*this);
}

Fixed::Fixed(int const intfixNum)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = (intfixNum << this->_fractBit);
	return ;
}

Fixed::~Fixed( )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float const floatfixNum)
{
	float	floatTemp;
	float	fract = 1.0;
	float	res = 0;

	floatTemp = floatfixNum - roundf(floatfixNum);
	this->_fixedPoint = int(roundf(floatfixNum));
	this->_fixedPoint <<= _fractBit;
	std::cout << "Float constructor called" << std::endl;
	for (int i = 0; i < this->_fractBit; ++i)
	{
		fract *= 0.5;
		this->_fixedPoint |= ((res + fract <= floatTemp + EPSILON)
			<< (this->_fractBit - 1 - i));
		res += fract * (res + fract <= floatTemp + EPSILON);
	}
	return ;
}

void			Fixed::setRawBits(int const reFixed)
{
	this->_fixedPoint = reFixed;
	return ;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

int				Fixed::toInt(void) const
{
	return ((this->_fixedPoint >> this->_fractBit));
}

float			Fixed::toFloat(void) const
{
	float	res = 0;
	float	fract = 1.0;

	for (int i = 0; i < this->_fractBit; ++i)
	{
		fract *= 0.5;
		if ((this->_fixedPoint >> (this->_fractBit - 1 - i)) & 1)
			res += fract;
	}
	res += (this->_fixedPoint >> this->_fractBit);
	return (res);
}

std::ostream	&operator<<(std::ostream &o,
					Fixed const &objFloat)
{
	o << objFloat.toFloat();
	return (o);
}

int const		Fixed::_fractBit = 8;