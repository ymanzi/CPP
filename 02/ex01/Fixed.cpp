
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

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called \n";
	_value = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called \n";
	_value = (int)std::roundf(value * (1 << _fractionalBits));
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

float Fixed::toFloat( void ) const
{
	return ((float)(_value / (float)(1 << _fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (_value >> _fractionalBits);
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

std::ostream& operator<<( std::ostream &flux, Fixed const& fxd)
{
	flux << fxd.toFloat();
	return (flux);
}