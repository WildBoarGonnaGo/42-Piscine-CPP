#include "replace.hpp"

std::string	strUpper(std::string src)
{

	std::string res = "";

	while (src[src.size() - 1] == '/')
		src.resize(src.size() - 1);
	if (src.empty())
		return (NULL);
	for (unsigned int i = src.rfind('/') + 1;
		i < src.length(); ++i)
		res.push_back(toupper(src[i]));
	return (res);
}