#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon 
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &ref);
		virtual ~PlasmaRifle();

		PlasmaRifle		&operator=(PlasmaRifle const &ref);
		virtual void	attack() const;
};

#endif