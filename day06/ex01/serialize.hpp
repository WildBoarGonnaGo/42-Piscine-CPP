#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <string>
#include <cstdlib>
typedef struct data
{
	std::string startStr;
	int			midInt;
	std::string	finStr;
} Data;

void	*serialize(void);
Data	*deserialize(void *raw);

#endif