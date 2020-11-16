#	ifndef SUPERTRAP_HPP
#	define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
		{

private:

public:
	SuperTrap( std::string name);
	SuperTrap( SuperTrap const& other);
	~SuperTrap( void );
	SuperTrap &operator=(SuperTrap const& other);
	void	rangedAttack(std::string const& target);
	void	meleeAttack(std::string const& target);
};

#	endif