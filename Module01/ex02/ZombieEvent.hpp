/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:50:50 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:50:51 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef	ZOMBIEEVENT_HPP
#	define	ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale>
#include "Zombie.hpp"

class ZombieEvent 
{
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(Zombie &f, std::string type);
	Zombie	*newZombie(std::string name);

	void randomChump( void );
	void announce(Zombie z);
};

#	endif
