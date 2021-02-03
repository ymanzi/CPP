/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:52:44 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:45 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANA_HPP
#	define HUMANA_HPP

#include <iostream>
#include <string>
#include <locale>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(void);
	HumanA(std::string nom);
	HumanA(std::string nom, Weapon &arme);
	~HumanA(void);
	
	void	attack(void) const;
	void	setWeapon(Weapon &arme);

private:
	std::string	_nom;
	Weapon		&_arme;
};

#	endif
