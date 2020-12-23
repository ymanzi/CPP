/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:42 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:44 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef SORCERER_HPP
#   define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer();

	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer( void );
		Sorcerer(Sorcerer const& other);
		Sorcerer    &operator=(Sorcerer const& other);

		void        introduction( void ) const;
		void        polymorph(Victim const& other) const;
};

std::ostream& operator<<( std::ostream &flux, Sorcerer const& other);

#   endif
