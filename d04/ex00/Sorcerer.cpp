
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& other): _name(other._name), _title(other._title)
{
    std::cout << "Nobody will ever look like ME !! Ohhhh We are the same >___<'' " << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const& other)
{
    if (this != &other)
    {
        _name = other._name;
        _title = other._title;
        std::cout << " YOu are now just equal like me !! You Outstanding Sorcerer !!" << std::endl;
    }
    return (*this);
}

void        Sorcerer::introduction( void ) const
{
    std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

void        Sorcerer::polymorph(Victim const& other) const
{
    other.getPolymorphed();
}

std::ostream&   operator<<( std::ostream &flux, Sorcerer const& other)
{
    other.introduction();
    return flux;
}