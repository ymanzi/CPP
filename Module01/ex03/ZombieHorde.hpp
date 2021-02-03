/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:29 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:30 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIEHORDE_HPP
#	define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
	
class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	void announce(void);
	std::string genName(void);

private:
	int _n;
	Zombie *_p;
};

#	endif
