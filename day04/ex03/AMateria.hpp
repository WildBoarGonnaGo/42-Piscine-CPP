#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
	private:
		std::string const	_type;
		unsigned int 		_xp;
	public:
		AMateria(std::string const &type);
		Amateria();
		Amateria(Amateria const &ref);
		virtual ~AMateria();

		Amateria			&operator=(Amateria const &ref);
		std::string const	&getType() const;	//Returns the materia type
		unsigned int		getXP();			//Returns the Materia's XP
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif