#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>

typedef unsigned int	uint32;

class ContainerOverflowException : public std::exception
{
	public:
		const char	*what() const throw() {
			return ("number can't be added: container overflow");
		}
};

class ContainerSpanFindException : public std::exception
{
	public:
		const char	*what() const throw() {
			return ("span seek failure: insufficient data");
		}
};

class Span
{
	public:
		Span(uint32 N); 
		Span(const Span &rhs);
		~Span();

		Span					&operator=(const Span &rhs);
		void					addNumber(int num);
		void					addNumber(std::vector<int> join);
		void					addNumber(int *arr, int bound);
		const std::vector<int>	&getRange() const;
		std::vector<int>		&getRange();
		uint32					getN() const;
		int						shortestSpan();
		int						longestSpan();
	private:
		std::vector<int>::iterator	_itAdd;
		Span();
		std::vector<int>			_range;
		uint32						_N;
};

#endif