/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:50:44 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:50:45 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(Zombie &f, std::string type)
{
	f.setType(type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name));
}

void ZombieEvent::randomChump( void )
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
	Zombie randomZ(nom);
	this->announce(randomZ);
};

void ZombieEvent::announce(Zombie z)
{
	z.announce();
}
