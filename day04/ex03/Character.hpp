#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string const	_name;
		AMateria			*_inv[4];
	public:
		Character(std::string const name);
		Character(Character const &ref);
		virtual ~Character();

		Character					&operator=(Character const &ref);
		virtual	std::string const	&getName() const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
		AMateria					*getInv(int idx) const;
};

#endif