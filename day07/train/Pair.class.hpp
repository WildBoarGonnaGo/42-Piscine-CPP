#ifndef PAIR_CLASS_HPP
# define PAIR_CLASS_HPP
# include <iostream>
# include <iomanip>

/*There is below a template class without specialization
	template<typename T, typename U>
And now this is partial initialization
	template<typename U> class Pair<int, U>
And now this is full specialization
	template<> Pair<bool, bool>
*/
template<typename T, typename U>
class Pair {
	public:
		Pair<T, U>(T const &lhs, U const &rhs) : _lhs(lhs),
			_rhs(rhs) {
				std::cout << "Generic template" << std::endl;
				return ;
			}
		~Pair<T, U>(void) { }

		T const	&fst(void) const {
			return (this->_lhs);
		}
		U const &sec(void) const {
			return (this->_rhs);
		}
	private:
		T const	&_lhs;
		U const	&_rhs;
		Pair<T, U>(void);
};

//partial specialization

template <typename U>
class Pair<int, U> {
	public:
		Pair<int, U>(int lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)  {
			std::cout << "Int partial specialization" << std::endl;
			return;
		}
		~Pair<int, U>() { };

		int		fst(void) const {return this->_lhs;}
		U const &sec(void) const {return this->_rhs;}
	private:
		int		_lhs;
		U const &_rhs;
};

//right example of Full specialization

template<>
class Pair<bool, bool> {
	public:
		Pair<bool, bool>(bool lhs, bool rhs) {
			std::cout << "Bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return ;
		}
		~Pair<bool, bool>() {}

		bool	fst(void) const { return (this->_n & 0x1); }
		bool	sec(void) const { return (this->_n & 0x2); }
	private:
		int	_n;
		Pair<bool, bool>(void);
};

template<typename T, typename U>
std::ostream	&operator<<(std::ostream &output, Pair<T, U>const &p)
{
	output << "Pair (" << p.fst() << ", "
		<< p.sec() << ')';
	return (output);
}

std::ostream	&operator<<(std::ostream &output, Pair<bool, bool>const &p)
{
	output << std::boolalpha << "Pair (" << p.fst() << ", "
		<< p.sec() << ')';
	return (output);
}

#endif