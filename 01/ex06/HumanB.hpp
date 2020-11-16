#	ifndef HUMANB_HPP
#	define HUMANB_HPP

#include <iostream>
#include <string>
#include <locale>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(void);
	HumanB(std::string nom);
	HumanB(std::string nom, Weapon &arme);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon &arme);

protected:
	std::string	_nom;
	Weapon		*_arme;
};


#	endif