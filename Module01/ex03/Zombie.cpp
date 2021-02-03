/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:07 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:08 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nom, std::string type): _nom(nom), _type(type)
{
	srand(time(0));
}

Zombie::Zombie(std::string nom): _nom(nom), _type("aspirant Zombie")
{	
	srand(time(0));
}

Zombie::Zombie(void): _nom("Ehrick"), _type("aspirant Zombie")
{
	srand(time(0));
	_nom = this->genName();
}

std::string Zombie::genName(void)
{
	char voyelle[] = {'a', 'e', 'i', 'o', 'u'};
	char consonne[] = {'b','c','d','f','g','h','j','k','l','m','n',
		'p','q','r','s','t','v','w', 'x', 'y', 'z'};
	std::string nom;

	srand(time(0));

	for (int i = 0; i < 6; i++)
	{
		int j;

		if (!(i % 2))
		{
			j = rand() % 21;
			if (!i)
				nom += std::toupper(consonne[j]);
			else
				nom += consonne[j];
		}
		else
		{
			j = rand() % 5;
			nom += voyelle[j];
		}
	}
	return (nom);
}

void Zombie::announce(void)
{
	std::cout << "< " << _nom << " (" << _type << ") > Braiiiiiiiiiinnnnnnnnsssss   ........." << std::endl;
}

void Zombie::setType( std::string type)
{
	_type = type;
}

void Zombie::setName( std::string name)
{
	_nom = name;
}


