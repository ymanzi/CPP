#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const& other): AWeapon(other)
{
	*this = other;
}

PowerFist::~PowerFist(void)
{
}

PowerFist& PowerFist::operator=(PowerFist const& other)
{
	if (this != &other)
		AWeapon::operator=(other);
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}