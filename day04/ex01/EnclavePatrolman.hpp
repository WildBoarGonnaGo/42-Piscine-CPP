#ifndef ENCLAVEPATROLMAN_HPP
# define ENCLAVEPATROLMAN_HPP
# include "Enemy.hpp"

class EnclavePatrolman : public Enemy
{
	public:
		EnclavePatrolman();
		EnclavePatrolman(EnclavePatrolman const &ref);
		virtual ~EnclavePatrolman();

		EnclavePatrolman	&operator=(EnclavePatrolman const &ref);
		virtual void		takeDamage(int hit);
};

#endif