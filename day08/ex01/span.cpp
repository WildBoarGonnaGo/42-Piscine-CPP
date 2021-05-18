#include "span.hpp"
#include <iostream>

const char	*ContainerOverflowException::what() const throw()
{
	return ("number can't be added: container overflow");
}

const char	*ContainerSpanFindException::what() const throw()
{
	return ("span seek failure: insufficient data");
}

Span::Span( ) { } 

Span::Span(uint32 N) : _N(N) { }

Span::Span(const Span &rhs)
{
	if (this != &rhs)
		*this = rhs;
}

Span::~Span( ) { };

Span	&Span::operator=(const Span &rhs)
{
	this->_N = rhs._N;
	this->_range.clear();
	this->_range.insert(this->_range.end(), rhs.getRange().begin(), rhs.getRange().end());
	return (*this);
}

void				Span::addNumber(int num)
{
	uint32	size = this->_range.size();
	
	if (size == this->_N)
		throw ContainerOverflowException();
	this->_range.push_back(num);
}

int					Span::shortestSpan() 
{
	std::vector<int>			temp(this->_range);

	if (temp.size() <= 1)
		throw ContainerSpanFindException();
	std::sort(temp.begin(), temp.end());
	return (temp[1] - temp[0]);
}

int					Span::longestSpan()
{
	std::vector<int>			temp(this->_range);

	if (temp.size() <= 1)
		throw ContainerSpanFindException();
	std::sort(temp.begin(), temp.end());
	return (temp[temp.size() - 1] - temp[0]);
}

uint32				Span::getN() const
{
	return (this->_N);
}

const std::vector<int>	&Span::getRange() const
{
	return (this->_range);
}

std::vector<int>	&Span::getRange()
{
	return (this->_range);
}

void				Span::addNumber(std::vector<int> join)
{
	if (this->_range.size() + join.size() > this->_N)
		throw ContainerOverflowException();
	this->_range.insert(this->_range.end(), join.begin(), join.end());
}

void				Span::addNumber(int *arr, int bound)
{	
	if (this->_range.size() + bound > this->_N)
		throw ContainerOverflowException();
	try
	{
		this->_range.insert(this->_range.end(), arr, arr + bound);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}