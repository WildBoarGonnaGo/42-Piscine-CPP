#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <vector>
# include <list>
# include <iterator>
# include <iostream>
# include <algorithm>

class	ReturnIntException : public std::exception
{
	public:
		const char	*what() const throw();
};

template<class T>
typename T::iterator	easyfind(T &sample, int value)
{
	typename T::iterator	it;
	
	it = std::find(sample.begin(), sample.end(), value);
	if (it == sample.end())
		throw ReturnIntException();
	return (it);		
}

template<class T>
typename T::const_iterator	easyfind(T const &sample, int value)
{
	typename T::const_iterator	it;

	it = std::find(sample.begin(), sample.end(), value);
	if (it == sample.end())
		throw ReturnIntException();
	return (it);		
}

#endif