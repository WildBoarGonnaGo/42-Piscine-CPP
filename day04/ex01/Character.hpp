#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character
{
	private:
		Character();
		std::string const	_name;
		int					_ap;
		AWeapon				*_weapon;
	public:
		Character(std::string const &name);
		Character(Character const &ref);
		~Character();

		Character			&operator=(Character const &ref);
		void				RecoverAP();
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);
		AWeapon				*getWeapon() const;
		int					getAP() const;
		std::string const	getName() const;
};

std::ostream	&operator<<(std::ostream &output, Character const &ref);

#endif