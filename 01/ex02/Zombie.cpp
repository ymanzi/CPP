#include "Zombie.hpp"


Zombie::Zombie(std::string nom, std::string type): _nom(nom), _type(type)
{
}

Zombie::Zombie(std::string nom): _nom(nom), _type("aspirant Zombie")
{
}

void Zombie::advert(void)
{
	std::cout << "< " << _nom << " (" << _type << ") > Braiiiiiiiiiinnnnnnnnsssss   ......... \n";
}

void Zombie::setType( std::string type)
{
	_type = type;
}
