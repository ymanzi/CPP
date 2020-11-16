
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other): AWeapon(other)
{
	*this = other;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& other)
{
	if (this != &other)
		AWeapon::operator=(other);
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}