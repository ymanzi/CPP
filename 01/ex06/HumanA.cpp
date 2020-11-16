
#include "HumanA.hpp"

HumanA::HumanA(void)
{
}

HumanA::HumanA(std::string nom, Weapon &arme): _nom(nom)
{
	_arme = &arme;
}

HumanA::HumanA(std::string nom): _nom(nom)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << _nom << " attack with his " <<
		_arme->getType() << std::endl;
}

void HumanA::setWeapon(Weapon &arme)
{
	_arme = &arme;
}