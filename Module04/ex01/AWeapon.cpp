/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:53 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:55 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const& other): _name(other._name), _apcost(other._apcost), _damage(other._damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon& AWeapon::operator=(AWeapon const& other)
{
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	return (*this);
}

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}

std::ostream &operator<<(std::ostream &flux, AWeapon const& other)
{
	flux << other.getName();
	return (flux);
}
