/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:10:24 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:10:25 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CURE_HPP
#	define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure( void );
	Cure(Cure const& other);
	Cure& operator=(Cure const& other);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#	endif
