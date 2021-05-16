#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <vector>
# include <list>
# include <deque>
# include <set>
# include <map>
# include <iterator>
# include <iostream>

class	ReturnIntException : public std::exception
{
	public:
		const char	*what() const throw() {
			return ("return error: value wasn't found");
		}
};

template<class T>
typename T::iterator	easyfind(T &sample, int value)
{
	typename T::iterator	it;
	typename T::iterator	itEnd = sample.end();

	for (it = sample.begin(); it != itEnd; ++it)
	{
		if (*it == value)
			break;
	}
	if (it == itEnd)
		throw ReturnIntException();
	return (it);		
}

template<class T>
typename T::const_iterator	easyfind(T const &sample, int value)
{
	typename T::const_iterator	it;
	typename T::const_iterator	itEnd = sample.end();

	for (it = sample.begin(); it != itEnd; ++it)
	{
		if (*it == value)
			break;
	}
	if (it == itEnd)
		throw ReturnIntException();
	return (it);		
}

#endif