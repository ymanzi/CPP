/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:52:58 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:59 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WEAPON_HPP
#   define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string	&getType(void) const;
	void				setType(std::string type);

private:
	std::string			_type;
};

#   endif
