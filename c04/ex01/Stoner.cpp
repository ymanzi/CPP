/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stoner.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:23 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:24 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stoner.hpp"

Stoner::Stoner(void): AWeapon("Stoner", 1, 210)
{
}

Stoner::Stoner(Stoner const& other): AWeapon(other)
{
	*this = other;
}

Stoner::~Stoner(void)
{
}

Stoner& Stoner::operator=(Stoner const& other)
{
	if (this != &other)
		AWeapon::operator=(other);
	return (*this);
}

void Stoner::attack(void) const
{
	std::cout << "* Plock Plock BOUUUUMMMMM *" << std::endl;
}
