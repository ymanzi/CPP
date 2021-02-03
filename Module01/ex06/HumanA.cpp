/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:52:18 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:19 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nom, Weapon &arme): _nom(nom), _arme(arme)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << _nom << " attack with his " <<
		_arme.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &arme)
{
	_arme = arme;
}
