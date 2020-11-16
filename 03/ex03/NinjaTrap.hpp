#	ifndef NINJATRAP_HPP
#	define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
		{

private:

public:
	NinjaTrap( std::string name);
	NinjaTrap( NinjaTrap const& other);
	~NinjaTrap( void );
	NinjaTrap &operator=(NinjaTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);

	void	ninjaShoebox(ClapTrap const& target);
	void	ninjaShoebox(NinjaTrap const& target);
	void	ninjaShoebox(FragTrap const& target);
	void	ninjaShoebox(ScavTrap const& target);
};

#	endif