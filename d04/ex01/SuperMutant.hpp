
#	ifndef SUPERMUTANT_HPP
#	define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const& other);
	SuperMutant& operator=(SuperMutant const& other);
	virtual ~SuperMutant(void);
	virtual void takeDamage(int damage);
	
};


#	endif