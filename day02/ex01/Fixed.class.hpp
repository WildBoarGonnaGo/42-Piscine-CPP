

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &refInst);
		~Fixed();
		Fixed				&operator=(Fixed const &reFixed);
		int 				getRawBits(void) const;
		void				setRawBits(int const reFixed);
	private:
		int					_fixedPoint;
		static const int	_fractBit;

};

#endif
