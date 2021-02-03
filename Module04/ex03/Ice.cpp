/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:53 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:54 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const& other): AMateria("ice")
{
	this->_xp = other.getXP();
}

Ice& Ice::operator=(Ice const& other)
{
	if (this != &other)
		this->_xp = other.getXP();
	return (*this);
}

Ice::~Ice()
{}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}
	
void Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
