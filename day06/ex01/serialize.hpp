#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <string>
#include <cstdlib>
struct Data
{
	std::string startStr;
	int			midInt;
	std::string	finStr;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif