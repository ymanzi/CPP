#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
private:
	std::string _name;
	int _damage;
	int _apcost;

public:
	AWeapon(std::string const &name, int damage, int apcost);
	AWeapon(AWeapon const &other);
	AWeapon &operator=(AWeapon const &other);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
