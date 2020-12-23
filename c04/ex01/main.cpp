/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:34 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:37 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Stoner.hpp"
#include "Magicarpe.hpp"

int main()
{
	{
		std::cout << "----------------- Given Tests --------------" << std::endl;
		Character *me = new Character("me");

		std::cout << *me;

		Enemy *b = new RadScorpion;

		AWeapon *pr = new PlasmaRifle;
		AWeapon *pf = new PowerFist;

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		std::cout << std::endl <<"----------------- My Tests --------------" << std::endl;
		std::cout << "--------------------  Character  ---------------" << std::endl;
		Character	gamer;
		b = new SuperMutant;

		std::cout << gamer << std::endl;
		std::cout << " >> Attack with no Weapon" << std::endl;
		gamer.attack(b);
		std::cout << " >> Equip PowerFist" << std::endl;
		gamer.equip(pf);
		std::cout << " >> Attack SuperMutant with PowerFist" << std::endl;
		gamer.attack(b);
		gamer.attack(b);
		gamer.attack(b);
		std::cout << " >> Attack SuperMutant with PowerFist and die" << std::endl;
		gamer.attack(b);
		std::cout << " >> Gamer recover AP" << std::endl;
		gamer.recoverAP();
		std::cout << gamer;
		gamer.recoverAP();
		gamer.recoverAP();
		std::cout << gamer;
		gamer.recoverAP();
		std::cout << gamer;
		std::cout << " >> AP are full" << std::endl;
		gamer.recoverAP();
		gamer.recoverAP();
		std::cout << gamer;
		std::cout << " >> UnEquip PowerFist" << std::endl;
		gamer.equip(0);
		std::cout << std::endl <<"----------------- Stoner + Magicarpe --------------" << std::endl;
		b = new Magicarpe;
		AWeapon *s = new Stoner;
		std::cout << " >> Equip Stoner" << std::endl;
		gamer.equip(s);
		std::cout << gamer;
		std::cout << " >> Attack Magicarpe with Stoner and die" << std::endl;
		gamer.attack(b);
		gamer.equip(0);
		me->equip(0);

		delete pr;
		delete pf;
		delete me;
		delete s;
	}
	return 0;
}
