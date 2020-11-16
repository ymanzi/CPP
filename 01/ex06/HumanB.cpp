#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string nom, Weapon &arme): _nom(nom)
{
	_arme = &arme;
}

HumanB::HumanB(std::string nom): _nom(nom)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void) const
{
	std::cout << _nom << " attack with his " <<
		_arme->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arme)
{
	_arme = &arme;
}