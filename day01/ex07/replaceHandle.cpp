#include "replace.hpp"

void	replaceHandle(std::string s1, std::string s2,
				std::string *src)
{
	int	pos;

	pos = src->find(s1);
	while (pos != -1)
	{
		src->replace(src->begin() + pos, src->begin()
			+ pos + s1.length(), s2);
		pos = src->find(s1);
	}
}