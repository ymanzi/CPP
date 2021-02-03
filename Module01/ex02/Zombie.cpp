/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:50:26 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:50:28 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nom, std::string type): _nom(nom), _type(type)
{
}

Zombie::Zombie(std::string nom): _nom(nom), _type("Newbie")
{
}

void Zombie::announce(void)
{
	std::cout << "< " << _nom << " (" << _type << ") > Braiiiiiiiiiinnnnnnnnsssss   ........." << std::endl;
}

void Zombie::setType( std::string type)
{
	_type = type;
}
