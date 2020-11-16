

#	ifndef	ZOMBIE_HPP
#	define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie(std::string nom);
	Zombie(std::string nom, std::string type);
	void	advert(void);
	void	setType( std::string type);

	protected:
	std::string	_nom;
	std::string	_type;
};

#	endif
