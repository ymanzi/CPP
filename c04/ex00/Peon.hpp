/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:34 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:36 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef PEON_HPP
#   define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name = "Phoenix");
		Peon(Peon const& other);
		virtual ~Peon(void);
		Peon& operator=(Peon const& other);
		virtual void getPolymorphed(void) const;
};

#   endif
