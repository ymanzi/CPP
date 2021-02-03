/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:05:29 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:05:30 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name): ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	srand(time(0));
	std::cout << "Basic FragTrap Constructor Called!" << std::endl;
}

FragTrap::FragTrap( FragTrap const& other): ClapTrap(other)
{
	std::cout << "Copy FragTrap Constructor Called!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called! " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other){

	std::cout << "Assignation FragTrap constructor called !" << std::endl;

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
