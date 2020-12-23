/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:57:44 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/15 10:57:46 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
