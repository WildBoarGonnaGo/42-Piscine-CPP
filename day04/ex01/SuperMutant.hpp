#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &ref);
		virtual ~SuperMutant();

		SuperMutant		&operator=(SuperMutant const &ref);
		virtual void	takeDamage(int hit);
};

#endif