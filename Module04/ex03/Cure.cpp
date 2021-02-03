/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:49 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:50 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const& other): AMateria("cure")
{
	this->_xp = other.getXP();
}

Cure& Cure::operator=(Cure const& other)
{
	if (this != &other)
		this->_xp = other.getXP();
	return (*this);
}

Cure::~Cure()
{}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}
	
void Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
