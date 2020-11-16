
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n)
{
	srand(time(0));

	_p = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		_p[i].setName(this->genName());
		_p[i].setType("Zombie Futuriste");
	}	
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] _p;
	_p = 0;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_n; i++)
		_p[i].announce();
}

std::string ZombieHorde::genName(void)
{
        char voyelle[] = {'a', 'e', 'i', 'o', 'u'};
        char consonne[] = {'b','c','d','f','g','h','j','k','l','m','n',
                'p','q','r','s','t','v','w', 'x', 'y', 'z'};
        std::string nom;

        for (int i = 0; i < 6; i++)
        {
                int j;

                if (!(i % 2))
                {
                        j = rand() % 21;
                        if (!i)
                                nom += std::toupper(consonne[j]);
                        else
                                nom += consonne[j];
                }
                else
                {
                        j = rand() % 5;
                        nom += voyelle[j];
                }
        }
        return (nom);
}
