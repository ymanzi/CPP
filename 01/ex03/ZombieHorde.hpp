
#	ifndef ZOMBIEHORDE_HPP
#	define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
	
class ZombieHorde
{

public:
	//ZombieHorde(void);
	ZombieHorde(int n);
	~ZombieHorde(void);
	void announce(void);
	std::string genName(void);

protected:
	int _n;
	Zombie *_p;
};

#	endif
