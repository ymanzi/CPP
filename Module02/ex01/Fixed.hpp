/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:58:22 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 10:58:25 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

private:
	int					_value;
	static const int	_fractionalBits;

public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);
	Fixed(Fixed const& autre);
	Fixed& operator=(Fixed const& num);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream &flux, Fixed const& fxd);

#	endif
