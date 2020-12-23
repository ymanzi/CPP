/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:15 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:16 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const& other): AWeapon(other)
{
	*this = other;
}

PowerFist::~PowerFist(void)
{
}

PowerFist& PowerFist::operator=(PowerFist const& other)
{
	if (this != &other)
		AWeapon::operator=(other);
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
