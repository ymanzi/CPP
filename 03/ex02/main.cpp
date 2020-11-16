#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	FragTrap yves("R2D2");
	ScavTrap r3d3("lol");

	yves.rangedAttack("Trololol");
	r3d3.meleeAttack("Anakin");

	yves.vaulthunter_dot_exe(" My Father");

	r3d3.challengeNewcomer("NewComer");

	yves.takeDamage(50);
	r3d3.takeDamage(235);

	yves.beRepaired(12);
	r3d3.beRepaired(125);
}