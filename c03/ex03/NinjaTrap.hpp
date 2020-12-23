/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:07:20 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:07:22 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef NINJATRAP_HPP
#	define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
		{

private:

public:
	NinjaTrap( std::string name);
	NinjaTrap( NinjaTrap const& other);
	~NinjaTrap( void );
	NinjaTrap &operator=(NinjaTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(NinjaTrap const &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
};

#	endif
