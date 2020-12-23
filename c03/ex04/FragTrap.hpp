/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:09:02 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:09:04 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FRAGTRAP_HPP
#	define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( std::string name);
	FragTrap( FragTrap const& other);
	~FragTrap( void );
	FragTrap &operator=(FragTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	vaulthunter_dot_exe(std::string const & target);
};

#	endif
