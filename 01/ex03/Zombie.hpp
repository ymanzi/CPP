

#	ifndef	ZOMBIE_HPP
#	define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string nom);
	Zombie(std::string nom, std::string type);
	void		advert(void);
	void		announce(void);
	void		setType( std::string type);
	void		setName( std::string name);
	std::string	genName(void);

	protected:
	std::string	_nom;
	std::string	_type;
};

#	endif
