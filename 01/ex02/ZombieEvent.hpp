
#	ifndef	ZOMBIEEVENT_HPP
#	define	ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale>
#include "Zombie.hpp"

class ZombieEvent 
{
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(Zombie &f, std::string type);
	Zombie	*newZombie(std::string name);

	void randomChump( void );
	void announce(Zombie z);
};

#	endif
