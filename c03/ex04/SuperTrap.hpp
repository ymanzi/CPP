/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:09:55 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:09:56 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SUPERTRAP_HPP
#	define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
public:
	SuperTrap( std::string name = "SuperT");
	SuperTrap( SuperTrap const& other);
	virtual ~SuperTrap( void );
	SuperTrap &operator=(SuperTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
};

#	endif
