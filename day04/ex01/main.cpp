#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "GaussRifle.hpp"
#include "Bozar.hpp"
#include "Centaur.hpp"
#include "EnclavePatrolman.hpp"

int main(void)
{
	Character 	*me = new Character("me");

	std::cout << *me;

	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me << std::endl;

	Enemy	*enclave = new EnclavePatrolman();
	AWeapon	*gauss = new GaussRifle();
	AWeapon	*bozar = new Bozar();

	std::cout << *enclave;
	me->attack(enclave);
	std::cout << *enclave;
	me->equip(gauss);
	std::cout << *me;
	me->attack(enclave);
	std::cout << *enclave << *me;
	me->attack(enclave);
	std::cout << *enclave << *me;
	me->equip(bozar);
	std::cout << *me;
	me->attack(enclave);
	std::cout << *enclave << *me;
	me->attack(enclave);
	me->RecoverAP();
	me->RecoverAP();
	me->RecoverAP();
	me->equip(pf);
	std::cout << *me;
	me->attack(enclave);
	std::cout << *me << std::endl;

	Enemy *mutant = new SuperMutant();
	me->RecoverAP();
	me->RecoverAP();
	me->equip(bozar);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *mutant << *me;
	me->attack(mutant);
	std::cout << *me << std::endl;

	Enemy *centaur = new Centaur();
	me->equip(gauss);
	std::cout << *me;
	me->attack(centaur);
	std::cout << *centaur << *me;
	me->attack(centaur);
	std::cout << *centaur << *me;
	me->attack(centaur);
	std::cout << *centaur << *me;
	me->attack(centaur);
	std::cout << *centaur << *me;
	me->equip(bozar);
	std::cout << *me;
	me->attack(centaur);
	std::cout << *me;
	delete pf;
	delete pr;
	delete bozar;
	delete gauss;
	delete me;
	return (0);
}