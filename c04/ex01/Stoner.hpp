/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stoner.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:26 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:27 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STONER_HPP
#define STONER_HPP

#include "AWeapon.hpp"

class Stoner : public AWeapon
{
public:
	Stoner(void);
	Stoner(Stoner const &other);
	virtual ~Stoner(void);
	Stoner &operator=(Stoner const &other);
	virtual void attack(void) const;
};

#endif
