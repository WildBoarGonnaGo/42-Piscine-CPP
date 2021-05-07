#include "EnclavePatrolman.hpp"
#include <iostream>

EnclavePatrolman::EnclavePatrolman() : Enemy(170, "Enclave Patrolman")
{
	std::cout << "As a loyal soldier of the Enclave, I got orders to kill you." << std::endl
		<< "Hope you don't mind." << std::endl;
}

EnclavePatrolman::~EnclavePatrolman()
{
	std::cout << "Huargh..." << std::endl;
}

void	EnclavePatrolman::takeDamage(int hit)
{
	int realHit = hit - 11;
	Enemy::takeDamage(realHit);
	return ;
}