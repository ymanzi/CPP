#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared! " << std::endl;   
}

Victim::Victim(Victim const &other): _name(other._name)
{
    std::cout << "A new Victim, randomly copied Created !!" << std::endl;
}

Victim& Victim::operator=(Victim const &other)
{
    if (this != &other)
    {
        _name = other._name;
        std::cout << "All Victims are Equal !!" << std::endl;
    }
    return (*this); 
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void    Victim::introduction(void) const
{
    std::cout << "I am " << _name << " and I like otters!" << std::endl;
}

void    Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;   
}

std::ostream& operator<<( std::ostream &flux, Victim const& other)
{
    other.introduction();
    return (flux);
}