
#	ifndef HUMANA_HPP
#	define HUMANA_HPP

#include <iostream>
#include <string>
#include <locale>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(void);
	HumanA(std::string nom);
	HumanA(std::string nom, Weapon &arme);
	~HumanA(void);
	void	attack(void) const;
	void	setWeapon(Weapon &arme);

protected:
	std::string	_nom;
	Weapon		*_arme;
};


#	endif