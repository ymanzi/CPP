
#	ifndef ICE_HPP
#	define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice(Ice const& other);
	Ice& operator=(Ice const& other);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#	endif