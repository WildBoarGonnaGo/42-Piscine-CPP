#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <cctype>
#include <cerrno>
#include <cstring>
#include <cstdlib>
#include <string>

std::string	strUpper(std::string src);
void		replaceHandle(std::string s1, std::string s2,
				std::string *src);
void		errOpen(std::string argv);
void		errArgs();
void		errEmptyStr(std::string str);

#endif