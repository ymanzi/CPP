
#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& other): Victim(other)
{
    std::cout << "Amazing Peon copied !!" << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(Peon const& other)
{
    if (this != &other)
        _name = other._name;
    return (*this);
}

void Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}