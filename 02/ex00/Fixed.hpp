#	ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>

class Fixed{

private:
	int					_value;
	static const int	_fractionalBits;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const& autre);
	Fixed& operator=(Fixed const& num);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#	endif