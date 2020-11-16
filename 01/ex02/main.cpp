#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie z("Rick", "Elite");
	Zombie *z1;

	z.advert();

	ZombieEvent z2;
	z2.randomChump();
	z1 = z2.newZombie("Ehrick");
	z2.setZombieType(*z1, "General");
	z1->advert();

	delete z1;
	z1 = 0;	
	return (0);
}
