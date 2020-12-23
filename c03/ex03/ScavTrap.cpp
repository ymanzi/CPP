/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:05:44 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:05:46 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name): ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	srand(time(0));
	std::cout << "Legendary speaking (ScavTrap), you will never find a better door-opener than myself ! Nice To meet you !" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& other): ClapTrap(other)
{
	std::cout << "Often imitated (ScavTrap), never equaled !! SkuuuuSkuuuuu !!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Some People like to call me TER-Mi-NA-TOR or just ScavTrap Destructor for closed ones !! " << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other){

	std::cout << " You want to look like me (ScavTrap)? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

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

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP the Only ScavTrAP < " << _name << " > attacks < " << target << " > at range, causing "
	<< _rangedAttackDamage << " points of damage! " << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP the Only ScavTrAP < " << _name << " > attacks < " << target << " > at melee, causing "
	<< _meleeAttackDamage << " points of damage! " << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
		std::string challenge[5] = {" - Tell me my number ! Psyyyyych Wrong Number !!",
							  " - Hummm a challenge..... No nooooot todaaaay !",
							  " - You should not pass ! *Take a Gandalf stance !!",
							  " - Who am I ? No no I am not your father !! hummm M-A-Y-B-E Yes Finaly !",
							  " - Who is the best Robot in all history ? - R2D2 ? Who is that ? The best is just in front of you *_*"};
		int i = rand() % 5;

		std::cout << "SC4V-TP < " << _name << " > *Challenge* < " << target << " > with " << challenge[i] << std::endl;
}
