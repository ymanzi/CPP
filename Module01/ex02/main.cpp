/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:50:58 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:50:59 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie z("Rick", "Elite");
	Zombie *z1;

	z.announce();

	ZombieEvent z2;
	z2.randomChump();
	z1 = z2.newZombie("Ehrick");
	z2.setZombieType(*z1, "General");
	z1->announce();

	delete z1;
	return (0);
}
