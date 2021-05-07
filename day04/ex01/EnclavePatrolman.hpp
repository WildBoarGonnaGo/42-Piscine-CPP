#ifndef ENCLAVEPATROLMAN_HPP
# define ENCLAVEPATROLMAN_HPP
# include "Enemy.hpp"

class EnclavePatrolman : public Enemy
{
	public:
		EnclavePatrolman();
		virtual ~EnclavePatrolman();

		virtual void	takeDamage(int hit);
};

#endif