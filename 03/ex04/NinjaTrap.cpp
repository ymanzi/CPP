#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name): ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "Legendary spea-nin ja-king !" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const& other): ClapTrap(other)
{
	std::cout << "<Ninja-ver> copied !!" << std::endl;

}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "Some People like to call me TER-Mi-NA-TOR or just NinjaTrap Destructor for closed ones !! " << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& other){

	std::cout << " You want to look like me (NinjaTrap)? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;

	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << "NINJ4-TP the Only NINJ4 < " << _name << " > attacks < " << target << " > at range, causing "
	<< _rangedAttackDamage << " points of damage! " << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << "NINJ4-TP the Only NINJ4 < " << _name << " > attacks < " << target << " > at melee, causing "
	<< _meleeAttackDamage << " points of damage! " << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& target)
{
		std::cout << "NINJ4-TP < " << _name << " > *Greetings* to my Infamous Ninj4 camarade "
		<< " BuuUuut I don't see you. You...The Real Ninja 0_0 " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& target)
{
		std::cout << "NINJ4-TP < " << _name << " > Heyyyy Sc4v-TP"
		<< " There is a door to open for you... I know...I know... you can be programmed for more than just opening doors but you know what ? Open that door for me "
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const& target)
{
		std::cout << "NINJ4-TP < " << _name << " > Ooooooooh "
		<< " the famous Fr4G-TP. Can i see your famous R2D2 Robot Dance ? °0° "
		<< std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const& target)
{
		std::cout << "NINJ4-TP < " << _name << " > Hummmmm.... Cl4P-TP"
		<< " Can you Clap for me ? YEEEESSS that will be your new TOP SECRET Mission !!! "
		<< std::endl;
}
