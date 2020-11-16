
#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed& Fixed::operator=(Fixed const& num){
	std::cout << "Assignation operator called \n";
	if (this != &num)
	{
		this->_value = num._value;
	}
	return (*this);
}

Fixed::Fixed(void) : _value (0)
{
	std::cout << "Default constructor called \n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called \n";
}

Fixed::Fixed( Fixed const& autre)
{
	std::cout << "Copy constructor called \n";
	_value = autre._value;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called \n";
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
