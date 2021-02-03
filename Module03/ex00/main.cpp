/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:04:26 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 11:04:27 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap yves("R2D2");
	FragTrap r3d3("Megazord");

//std::cout << "-----------------------Assignation Operator------------------------" << std::endl;
//	r3d3 = yves;

std::cout << "-----------------------   Ranged Attack    ------------------------" << std::endl;
	yves.rangedAttack("Trololol");
std::cout << "-----------------------    Melee Attack    ------------------------" << std::endl;
	r3d3.meleeAttack("Anakin");
std::cout << "----------------------- Vaulthunter Attack ------------------------" << std::endl;
	yves.vaulthunter_dot_exe(" My Father");
	yves.vaulthunter_dot_exe(" My Father");
	yves.vaulthunter_dot_exe(" My Father");
	yves.vaulthunter_dot_exe(" My Father");
	yves.vaulthunter_dot_exe(" NO HP");
	r3d3.vaulthunter_dot_exe(" Your Son");
	r3d3.vaulthunter_dot_exe(" Your Son");
	r3d3.vaulthunter_dot_exe(" Your Son");
	r3d3.vaulthunter_dot_exe(" Your Son");
	r3d3.vaulthunter_dot_exe(" NO HP");

std::cout << "-----------------------    Take Damages   ------------------------" << std::endl;
	yves.takeDamage(50);
	yves.takeDamage(3);
	r3d3.takeDamage(235);
std::cout << "-----------------------      Reparation    ------------------------" << std::endl;
	yves.beRepaired(12);
	r3d3.beRepaired(125);
}
