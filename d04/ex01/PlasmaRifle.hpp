
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &other);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &operator=(PlasmaRifle const &other);
	virtual void attack(void) const;
};

#endif