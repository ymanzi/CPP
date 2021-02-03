/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:40 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:42 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
{}

AMateria::AMateria(AMateria const& other)
{
	*this = other;
}

AMateria& AMateria::operator=(AMateria const& other)
{
	if (this != &other)
	{
		_type = other._type;
		_xp = other._xp;
	}
	return (*this);
}

AMateria::~AMateria()
{}

std::string const& AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}
