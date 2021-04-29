#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &refInst);
		Fixed(int const intfixNum);
		Fixed(float const floatfixNum);
		~Fixed();
		Fixed				&operator=(Fixed const &reFixed);
		float				toFloat(void) const;
		int					toInt(void) const;
		int 				getRawBits(void) const;
		void				setRawBits(int const reFixed);
	private:
		int					_fixedPoint;
		static const int	_fractBit;

};

std::ostream				&operator<<(std::ostream &o,
								Fixed const &objFloat);

#endif
