/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:09:48 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:09:50 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name): ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SUUUUPPPP3333RRRR-INIT !" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const& other): ClapTrap(other), FragTrap(other), NinjaTrap(other)
{
	std::cout << "SUUUUPPP3333RRR-COPY !" << std::endl;

}

SuperTrap::~SuperTrap( void )
{
	std::cout << "SuperTrap Destructor ! ALL I DO IS SUPER !! " << std::endl;
}


SuperTrap& SuperTrap::operator=(SuperTrap const& other){

	std::cout << " You want to look like me (SuperTrap)? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

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

void	SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}
