/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:09:36 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:09:38 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SCAVTRAP_HPP
#	define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( std::string name);
	ScavTrap( ScavTrap const& other);
	~ScavTrap( void );
	ScavTrap &operator=(ScavTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	challengeNewcomer(std::string const & target);
};

#	endif
