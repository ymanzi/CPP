#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main(void)
{




	/* POURQUOI ON DOIT PAS FAIRE L OPERATEUR=
	 *
	 */
	
	FragTrap yves("Fr4G");
	ScavTrap r3d3("Sc4V");
	ClapTrap r4d4("Cl4P");
	NinjaTrap r2d2("NiNJ4");
	SuperTrap s1d1("ST");


	{
		std::cout << "--------------------CL4PTrAp---------------------\n";
		ClapTrap r0d0(r4d4);
		ClapTrap r1d1(r4d4);

		r0d0.takeDamage(150);
		r1d1.beRepaired(50);
	}
	{
		std::cout << "--------------------Fr4GTrAp---------------------\n";
		FragTrap r0d0(yves);
		FragTrap r1d1(yves);

		r0d0.rangedAttack("Trololol");
		r1d1.meleeAttack("Anakin");
		yves.vaulthunter_dot_exe(" My Father");
	}
	{
		std::cout << "--------------------SC4VTrAp---------------------\n";
		ScavTrap r0d0(r3d3);
		ScavTrap r1d1(r3d3);

		r0d0.rangedAttack("Trololol");
		r1d1.meleeAttack("Anakin");
		r3d3.challengeNewcomer(" My Father");
	}
	{
		std::cout << "--------------------NinJ4TrAp---------------------\n";
		NinjaTrap r0d0(r2d2);
		NinjaTrap r1d1(r2d2);

		r0d0.rangedAttack("Trololol");
		r1d1.meleeAttack("Anakin");
		r2d2.ninjaShoebox(r4d4); // ClapTrap
		r2d2.ninjaShoebox(yves); // FragTrap
		r2d2.ninjaShoebox(r3d3); // ScavTrap
		r2d2.ninjaShoebox(r0d0); // NinjaTrap
	}
	{
		std::cout << "--------------------SP-TrAp---------------------\n";
		SuperTrap r0d0(s1d1);
		SuperTrap r1d1(s1d1);

		r0d0.rangedAttack("Trololol");
		r1d1.meleeAttack("Anakin");
		r1d1.ninjaShoebox(r4d4); // ClapTrap
		r1d1.ninjaShoebox(yves); // FragTrap
		r1d1.ninjaShoebox(r3d3); // ScavTrap
		r1d1.ninjaShoebox(r2d2); // NinjaTrap
		r1d1.vaulthunter_dot_exe(" My Father");
	}


	return (0);
}