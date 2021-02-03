/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:57:35 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 10:57:38 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed& Fixed::operator=(Fixed const& num)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &num)
	{
		this->_value = num._value;
	}
	return (*this);
}

Fixed::Fixed(void) : _value (0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const& autre)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = autre._value;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
