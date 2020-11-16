#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const& other): AMateria("cure")
{
	this->_xp = other.getXP();
}

Cure& Cure::operator=(Cure const& other)
{
	if (this != &other)
		this->_xp = other.getXP();
	return (*this);
}

Cure::~Cure()
{}

Cure* Cure::clone() const
{
	Cure *_new = new Cure(*this);
	return (_new);
}
	
void Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}