
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
	_level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "Legendary speaking, you will never find a better door-opener than myself ! Nice To meet you !" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& other)
{
	std::cout << "Often imitated, never equaled !! SkuuuuSkuuuuu !!" << std::endl;

	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Some People like to call me TER-Mi-NA-TOR !! " << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other){

	std::cout << " You want to look like me ? Right, i Can understand !! SkuuuuuSkuuuuu !!" << std::endl;

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

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP the Only ScavTrAP < " << _name << " > attacks < " << target << " > at range, causing "
	<< _rangedAttackDamage << " points of damage! " << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP the Only ScavTrAP < " << _name << " > attacks < " << target << " > at melee, causing "
	<< _meleeAttackDamage << " points of damage! " << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		int amount2 = amount - _armorDamageReduction;

		std::cout << "SC4V-TP < " << _name << " > The Armor couldn't fully protect him. He got "
		<< amount2 << "(the attack = " << amount << " ) damages." << std::endl;

		if (_hitPoints > amount2)
			_hitPoints -= amount2;
		else{
			_hitPoints = 0;
			std::cout << "SC4V-TP < " << _name << " > is .....<Skuuuuuuuuuuuuuu> Dead !!! " << std::endl;
		}
	}
	else
		std::cout << "SC4V-TP < " << _name << " > didn't receive any damage. "
			<< "The Armor is stronger than the attack *What a Beast* " << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP < " << _name << " > found some Jack Daniels on the way ! He got "
	<< amount << " HP Repaired !" << std::endl;

	if (_hitPoints + amount > 100)
		_hitPoints = 100;
	else
		_hitPoints += amount;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
		srand(time(0));
		std::string challenge[5] = {" - Tell me my number ! Psyyyyych Wrong Number !!",
							  " - Hummm a challenge..... No nooooot todaaaay !",
							  " - You should not pass ! *Take a Gandalf stance !!",
							  " - Who am I ? No no I am not your father !! hummm M-A-Y-B-E Yes Finaly !",
							  " - Who is the best Robot in all history ? - R2D2 ? Who is that ? The best is just in front of you *_*"};
		int i = rand() % 5;

		std::cout << "SC4V-TP < " << _name << " > *Challenge* < " << target << " > with " << challenge[i] << std::endl;
}