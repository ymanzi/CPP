/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:04:35 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:04:36 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	srand(time(0));
	std::cout << "Basic Constructor Called!" << std::endl;
}

FragTrap::FragTrap( FragTrap const& other)
{
	std::cout << "Copy Constructor Called!" << std::endl;

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

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called! " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other){

	std::cout << "Assignation constructor called !" << std::endl;

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

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP < " << _name << " > attacks < " << target << " > at range, causing "
	<< _rangedAttackDamage << " points of damage! " << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP < " << _name << " > attacks < " << target << " > at melee, causing "
	<< _meleeAttackDamage << " points of damage! " << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		unsigned int amount2 = amount - _armorDamageReduction;

		std::cout << "FR4G-TP < " << _name << " > The Armor couldn't fully protect him. He got "
		<< amount2 << "(the attack = " << amount << " ) damages." << std::endl;

		if (_hitPoints > amount2)
			_hitPoints -= amount2;
		else
		{
			_hitPoints = 0;
			std::cout << "FR4G-TP < " << _name << " > is .....<Biiiiiiiiiiipppppppp> Dead !!! " << std::endl;
		}
	}
	else
		std::cout << "FR4G-TP < " << _name << " > didn't receive any damage. "
			<< "The Armor is stronger than the attack *What a Beast* " << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP < " << _name << " > with " << _hitPoints <<" HP found some Jack Daniels on the way ! He got "
	<< amount << " HP Repaired !";

	if (_hitPoints + amount > 100)
		_hitPoints = 100;
	else
		_hitPoints += amount;

	std::cout << " He has now " << _hitPoints << " HP" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints >= 25)
	{
		std::string att[5] = {"PiouPiou", "Awesome Attack", "Ultimate alt+f4", "Pulling the power plug out", "R2D2 ROBOT Dance"};
		int i = rand() % 5;

		std::cout << "FR4G-TP < " << _name << " > attacks < " << target << " > with " << att[i] << std::endl;
		_energyPoints -= 25;
	}
	else
		std::cout << "FR4G-TP < " << _name << " > Does Not Have Enough Energie to lunch this Attack \n";
}
