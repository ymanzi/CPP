
#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(0)
{
}

Character::Character(Character const &other) : _name(other._name), _ap(other._ap)
{
	if (!other._weapon)
		_weapon = 0;
	else
	{
		if (other._weapon->getName() == "Plasma Rifle")
			_weapon = new PlasmaRifle();
		else
			_weapon = new PowerFist();
	}
}

Character& Character::operator=(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_ap = other._ap;
		delete _weapon;
		if (!other._weapon)
			_weapon = 0;
		else
		{
			if (other._weapon->getName() == "Plasma Rifle")
				_weapon = new PlasmaRifle();
			else
				_weapon = new PowerFist();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	delete _weapon;
	_weapon = 0;
}

void Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *other)
{
	if (_weapon == 0)
		return;
	if (_ap >= _weapon->getAPCost())
	{
		std::cout << this->_name << " attacks " << other->getType()
				  << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		other->takeDamage(_weapon->getDamage());
		if (other->getHP() <= 0)
		{
			delete other;
			other = 0;
		}
	}
}

std::string Character::getName() const
{
	return (_name);
}

void Character::introduction(void) const
{

	std::cout << _name << " has " << _ap << " AP";
	if (!_weapon)
		std::cout << " and is unarmed" << std::endl;
	else
		std::cout << " and wields a " << _weapon->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &flux, Character const &other)
{
	other.introduction();
	return (flux);
}