#include "ConvertOutput.hpp"
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdlib>

ConvertOutput::ConvertOutput( ) { }

ConvertOutput::ConvertOutput(std::string const literal) : _literal(literal) { }

ConvertOutput::~ConvertOutput( ) { }

ConvertOutput::ConvertOutput(ConvertOutput const &ref)
{
	*this = static_cast<ConvertOutput>(ref);
	return ;
}

ConvertOutput	&ConvertOutput::operator=(ConvertOutput const &ref)
{
	static_cast<void>(ref);
	return (*this);
}

void			ConvertOutput::charOutput()
{
	double	dVal = strtod(this->_literal.c_str(), NULL);
	char	res;

	std::cout << "char: ";
	if (std::isnan(dVal) || std::isinf(dVal))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	res = (!dVal && static_cast<char>(*this->_literal.c_str() - '0')) ? 
		static_cast<char>(*this->_literal.c_str())
		: static_cast<char>(dVal);
	if (!isprint(res) || !isascii(res))
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << '\'' << res << '\'' << std::endl;
}

void			ConvertOutput::intOutput()
{
	double	dVal = strtod(this->_literal.c_str(), NULL);
	int		res;

	std::cout << "int: ";
	if (std::isnan(dVal) || std::isinf(dVal))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	res = (!dVal && static_cast<char>(*this->_literal.c_str() - '0')) ? 
		static_cast<int>(*this->_literal.c_str())
		: static_cast<int>(dVal);
	std::cout << res << std::endl;
}

void			ConvertOutput::floatOutput()
{

	double	dVal = strtod(this->_literal.c_str(), NULL);
	float	res;

	std::cout << "float: ";
	if (std::isnan(dVal) || std::isinf(dVal))
	{
		std::cout << dVal << 'f' << std::endl;
		return ;
	}
	res = (!dVal && static_cast<char>(*this->_literal.c_str() - '0')) ? 
		static_cast<float>(static_cast<int>(*this->_literal.c_str()))
		: static_cast<float>(dVal);
	std::cout << res;
	if (res == static_cast<int>(res))
		std::cout << ".0";
	std::cout << 'f' << std::endl;
}

void			ConvertOutput::doubleOutput()
{
	double	dVal = strtod(this->_literal.c_str(), NULL);

	std::cout << "double: ";
	if (std::isnan(dVal) || std::isinf(dVal))
	{
		std::cout << dVal << std::endl;
		return ;
	}
	if (!dVal && static_cast<char>(*this->_literal.c_str() - '0'))
		dVal = static_cast<float>(static_cast<int>(*this->_literal.c_str()));
	std::cout << dVal;
	if (dVal == static_cast<int>(dVal))
		std::cout << ".0";
	std::cout << std::endl;	
}