/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:05:14 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:05:16 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
	_level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "ClapTrapAtrAAAAAAaaaaaa Createeed !!  A new king Arised" << std::endl;
}

ClapTrap::ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints, unsigned int maxEnergyPoints,
			unsigned int level, std::string name, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage,
			unsigned int armorDamageReduction): _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), _energyPoints(energyPoints),
			_maxEnergyPoints(maxEnergyPoints), _level(level), _name(name), _meleeAttackDamage(meleeAttackDamage),
			_rangedAttackDamage(rangedAttackDamage), _armorDamageReduction(armorDamageReduction)
{
	std::cout << "ClapTrap Constructor Called \n";
}

ClapTrap::ClapTrap( ClapTrap const& other)
{
	std::cout << "MakeItClap, Often imitated, never equaled !! SkuuuuSkuuuuu !!" << std::endl;

	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "(ClapTrap) : Some People like to call me TER-Mi-NA-TOR !! " << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other){

	std::cout << " You want to look like me ? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;

	return (*this);
}

std::string	ClapTrap::getName(void)
{
	return (_name);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		unsigned int amount2 = amount - _armorDamageReduction;

		std::cout << "CL4P-TP < " << _name << " > The Armor couldn't fully protect him. He got "
		<< amount2 << "(the attack = " << amount << " ) damages." << std::endl;

		if (_hitPoints > amount2)
			_hitPoints -= amount2;
		else{
			_hitPoints = 0;
			std::cout << "CL4P-TP < " << _name << " > is .....<Skuuuuuuuuuuuuuu> Dead !!! " << std::endl;
		}
	}
	else
		std::cout << "CL4P-TP < " << _name << " > didn't receive any damage. "
			<< "The Armor is stronger than the attack *What a Beast* " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP < " << _name << " > found some Jack Daniels on the way ! He got "
	<< amount << " HP Repaired !";

	if (_hitPoints + amount > 100)
		_hitPoints = 100;
	else
		_hitPoints += amount;
	
	std::cout << " He has now " << _hitPoints << " HP" << std::endl;
}
