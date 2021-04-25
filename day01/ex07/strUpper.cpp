#include "replace.hpp"

std::string	strUpper(std::string src)
{

	std::string res = "";
	
	if (src.empty())
		return (NULL);
	for (unsigned int i = 0; i < src.length(); ++i)
		res.push_back(toupper(src[i]));
	return (res);
}