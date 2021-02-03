/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:10:11 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:10:13 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef AMATERIA_HPP
#	define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;
		unsigned int	_xp;

	public:
		AMateria(std::string const & type = "Or Saphir");
		AMateria(AMateria const& other);
		AMateria& operator=(AMateria const& other);
		virtual ~AMateria();

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target) = 0;
};

#	endif
