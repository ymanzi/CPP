/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:04:41 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:04:42 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap{

private:
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
	FragTrap( std::string name);
	FragTrap( FragTrap const& other);
	~FragTrap( void );
	FragTrap &operator=(FragTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#	endif
