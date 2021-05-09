#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class ICharacter;
# include "ICharacter.hpp"

class AMateria
{
	private:
		std::string const	_type;
		unsigned int 		_xp;
	protected:
		AMateria();
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
		virtual ~AMateria( ) { };

		virtual AMateria	&operator=(AMateria const &ref);
		std::string const	&getType() const;	//Returns the materia type
		unsigned int		getXP() const;		//Returns the Materia's XP
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		void 				setXP(unsigned int val);
};

#endif