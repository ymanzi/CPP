#include "FragTrap.hpp"

int main(void)
{
	FragTrap yves("R2D2");
	FragTrap r3d3("lol");
	r3d3 = yves;

	yves.rangedAttack("Trololol");
	r3d3.meleeAttack("Anakin");

	yves.vaulthunter_dot_exe(" My Father");

	yves.takeDamage(50);
	r3d3.takeDamage(235);

	yves.beRepaired(12);
	yves.beRepaired(125);
}