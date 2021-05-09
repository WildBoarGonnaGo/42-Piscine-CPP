#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &ref);
		virtual ~Cure();

		Cure				&operator=(Cure const &ref);
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif