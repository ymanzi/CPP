/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:52:39 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:40 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANB_HPP
#	define HUMANB_HPP

#include <iostream>
#include <string>
#include <locale>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(void);
	HumanB(std::string nom);
	HumanB(std::string nom, Weapon &arme);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon &arme);

private:
	std::string	_nom;
	Weapon		*_arme;
};

#	endif
