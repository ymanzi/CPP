/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:47 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:49 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef VICTIM_HPP
#   define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	protected:
		std::string _name;

	public:
		Victim( std::string name = "Victimus");
		Victim( Victim const& other);
		Victim &operator=( Victim const& other);
		virtual ~Victim( void );

		void    introduction(void) const;
		virtual void    getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream &flux, Victim const& other);

#   endif
