/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:10 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:11 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other): AWeapon(other)
{
	*this = other;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& other)
{
	if (this != &other)
		AWeapon::operator=(other);
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
