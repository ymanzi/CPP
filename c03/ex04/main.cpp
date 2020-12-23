/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:10:36 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:10:39 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl << "-----------------------   FragTrap Construction    ------------------------" << std::endl;
		FragTrap yves("R2D2");
		std::cout << std::endl << "-----------------------   ScavTrap Construction    ------------------------" << std::endl;
		ScavTrap r3d3("Megazord");

		std::cout << std::endl << "-----------------------   Ranged Attack    ------------------------" << std::endl;
		yves.rangedAttack("Trololol");
		yves.meleeAttack("Anakin");
		
		std::cout << std::endl << "-----------------------    Melee Attack    ------------------------" << std::endl;
		r3d3.rangedAttack("Trololol");
		r3d3.meleeAttack("Anakin");
		
		std::cout << std::endl << "----------------------- Vaulthunter Attack ------------------------" << std::endl;
		yves.vaulthunter_dot_exe(" My Father");
		yves.vaulthunter_dot_exe(" My Father");
		yves.vaulthunter_dot_exe(" My Father");
		yves.vaulthunter_dot_exe(" My Father");
		yves.vaulthunter_dot_exe(" NO HP");
		r3d3.challengeNewcomer(" Your Son");
		r3d3.challengeNewcomer(" Your Son");
		r3d3.challengeNewcomer(" Your Son");
		r3d3.challengeNewcomer(" Your Son");

		std::cout << std::endl << "-----------------------    Take Damages   ------------------------" << std::endl;
		yves.takeDamage(50);
		yves.takeDamage(3);
		r3d3.takeDamage(3);
		r3d3.takeDamage(235);
		std::cout << std::endl << "-----------------------     Reparation    ------------------------" << std::endl;
		yves.beRepaired(12);
		r3d3.beRepaired(125);

		std::cout << std::endl << "-----------------------    Destruction    ------------------------" << std::endl;
	}
	{
		std::cout << std::endl << "----------------------    Construction   -------------------------" << std::endl;
		FragTrap frag("Fr4G");
		ScavTrap scav("Sc4V");
		ClapTrap clap("Cl4P");
		NinjaTrap ninja("NiNJ4");
		SuperTrap super("Big S");

		std::cout << std::endl << "----------------------      NinJ4TrAp    -------------------------" << std::endl;
		std::cout << std::endl << "-----------------------  NinjaCopy   ------------------------" << std::endl;
		NinjaTrap r0d0(ninja);

		std::cout << std::endl << "-----------------------  Ninja Range-Melee   ------------------------" << std::endl;
		ninja.rangedAttack("Trololol");
		ninja.meleeAttack("Anakin");

		std::cout << std::endl << "-----------------------  NinjaShoeBox   ------------------------" << std::endl;
		ninja.ninjaShoebox(clap); // ClapTrap
		ninja.ninjaShoebox(frag); // FragTrap
		ninja.ninjaShoebox(scav); // ScavTrap
		ninja.ninjaShoebox(r0d0); // NinjaTrap
		std::cout << std::endl << "--------------------        SP-TrAp       ---------------------" << std::endl;
		std::cout << std::endl << "-----------------------  Super Range-Melee   ------------------------" << std::endl;
		super.rangedAttack("Trololol");
		super.meleeAttack("Anakin");

		std::cout << std::endl << "-----------------------  SUPER ShoeBox   ------------------------" << std::endl;
		super.ninjaShoebox(clap); // ClapTrap
		super.ninjaShoebox(frag); // FragTrap
		super.ninjaShoebox(scav); // ScavTrap
		super.ninjaShoebox(ninja); // NinjaTrap

		std::cout << std::endl << "-------------------  SUPER VOLT #SHOUTOUT -----------------------" << std::endl;
		super.vaulthunter_dot_exe(" My Father");
		std::cout << std::endl << "-----------------------  Destruction   ------------------------" << std::endl;
	}
	return (0);
}
