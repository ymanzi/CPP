#	ifndef SCAVTRAP_HPP
#	define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
		{

private:

public:
	ScavTrap( std::string name);
	ScavTrap( ScavTrap const& other);
	~ScavTrap( void );
	ScavTrap &operator=(ScavTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
	void	challengeNewcomer(std::string const & target);
};

#	endif