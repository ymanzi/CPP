/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:48 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:49 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
private:
	std::string _name;
	int			_ap;
	AWeapon		*_weapon;
public:
	Character(std::string const &name = "SuperHuman");
	Character(Character const& other);
	Character& operator=(Character const& other);
	~Character(void);

	void				recoverAP(void);
	void				equip(AWeapon *weapon);
	void				attack(Enemy *other);
	void				introduction(void) const;
	std::string const	getName() const;
};

std::ostream& operator<<(std::ostream &flux, Character const& other);
#endif
