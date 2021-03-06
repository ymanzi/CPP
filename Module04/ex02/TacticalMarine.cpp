/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:57 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:59 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

//Compliant

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& other)
{
	(void)other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const& other)
{
	(void)other;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}

// Functions

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *elem;
	elem = new TacticalMarine(*this);

	return (elem);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
