#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
	protected:
		Enemy();
		std::string const	_type;
		int					_hp;
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &ref);
		virtual 			~Enemy();
	
		Enemy	&operator=(Enemy const &ref);
		std::string const	getType() const;
		int					getHP() const;
		virtual void 		takeDamage(int hit);
};

std::ostream	&operator<<(std::ostream &output, Enemy const &ref);

#endif