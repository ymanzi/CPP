/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:05:21 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:05:22 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{

protected:
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;

public:
	ClapTrap( std::string name);
	ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints, unsigned int maxEnergyPoints,
			unsigned int level, std::string name, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage,
			unsigned int armorDamageReduction);
	ClapTrap( ClapTrap const& other);
	~ClapTrap( void );
	ClapTrap &operator=(ClapTrap const& other);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#	endif
