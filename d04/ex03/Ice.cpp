#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const& other): AMateria("ice")
{
	this->_xp = other.getXP();
}

Ice& Ice::operator=(Ice const& other)
{
	if (this != &other)
		this->_xp = other.getXP();
	return (*this);
}

Ice::~Ice()
{}

Ice* Ice::clone() const
{
	Ice *_new = new Ice(*this);
	return (_new);
}
	
void Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}