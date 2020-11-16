
#	ifndef POWERFIST_HPP
#	define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(PowerFist const &other);
	virtual ~PowerFist(void);
	PowerFist &operator=(PowerFist const &other);
	virtual void attack(void) const;
};

#	endif