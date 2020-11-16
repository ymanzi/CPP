
#	ifndef AMATERIA_HPP
#	define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const& other);
	AMateria& operator=(AMateria const& other);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target) = 0;
};

#	endif