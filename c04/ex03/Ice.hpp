/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:10:51 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:10:53 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ICE_HPP
#	define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice(Ice const& other);
	Ice& operator=(Ice const& other);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#	endif
