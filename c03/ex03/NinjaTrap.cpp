/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:07:01 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:07:02 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name): ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "Legendary speaking (NinjaTrap), you will never find a better door-opener than myself ! Nice To meet you !" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const& other): ClapTrap(other)
{
	std::cout << "Often imitated (NinjaTrap), never equaled !! SkuuuuSkuuuuu !!" << std::endl;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "Some People like to call me TER-Mi-NA-TOR or just NinjaTrap Destructor for closed ones !! " << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& other){

	std::cout << " You want to look like me (NinjaTrap)? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

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

void	NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << "NINJ4-TP the Only NINJ4 < " << _name << " > attacks < " << target << " > at range, causing "
	<< _rangedAttackDamage << " points of damage! " << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << "NINJ4-TP the Only NINJ4 < " << _name << " > attacks < " << target << " > at melee, causing "
	<< _meleeAttackDamage << " points of damage! " << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& target)
{
		std::cout << "NINJ4-TP < " << _name << " > *Greetings* to my Infamous " << target._name << " Ninj4 camarade "
		<< " BuuUuut I don't see you. You...The Real Ninja 0_0 " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
		std::cout << "NINJ4-TP < " << _name << " > Heyyyy Sc4v-TP"
		<< " There is a door to be opened by you... I know...I know... " << target.getName()
		<< " can be programmed for more than just opening doors but you know what ? Open that door for me " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
		std::cout << "NINJ4-TP < " << _name << " > Ooooooooh "
		<< " the famous Fr4G-TP. Can i see your famous R2D2 Robot Dance ? °0° "
		<< std::endl;
		target.vaulthunter_dot_exe(this->_name);
}

void NinjaTrap::ninjaShoebox(ClapTrap & target)
{
		std::cout << "NINJ4-TP < " << _name << " > Hummmmm.... Cl4P-TP"
		<< " Can you Clap for me " << target.getName() << " ? YEEEESSS that will be your new TOP SECRET Mission !!! "
		<< std::endl;
}
