#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		virtual ~SuperMutant();

		virtual void	takeDamage(int hit);
};

#endif