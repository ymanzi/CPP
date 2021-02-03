#	ifndef NINJATRAP_HPP
#	define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap( std::string name = "Ninja");
	NinjaTrap( NinjaTrap const& other);
	virtual ~NinjaTrap( void );
	NinjaTrap &operator=(NinjaTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(NinjaTrap &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
};

#	endif