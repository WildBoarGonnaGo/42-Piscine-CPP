#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp) { }

Enemy::Enemy( ) : _type("Humanoid"), _hp(50) { }

Enemy::Enemy(Enemy const &ref)
{
	*this = ref;
	return ;
}

Enemy				&Enemy::operator=(Enemy const &ref)
{
	this->_hp = ref.getHP();
	return (*this);
}

Enemy::~Enemy( ) { }

std::string const	Enemy::getType() const
{
	return (this->_type);
}

int					Enemy::getHP() const
{
	return (this->_hp);
}

void				Enemy::takeDamage(int hit)
{
	int	realHit;

	if (hit > 0)
	{
		realHit = (this->_hp - hit > 0) ?
			hit : this->_hp;
		this->_hp -= realHit;
	}
	return ;
}

std::ostream	&operator<<(std::ostream &output, Enemy const &ref)
{
	output << ref.getType() << " has " << ref.getHP()
		<< " HP" << std::endl;
	return (output);
}