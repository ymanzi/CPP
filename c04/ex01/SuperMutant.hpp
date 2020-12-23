/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:31 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:32 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SUPERMUTANT_HPP
#	define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const& other);
	SuperMutant& operator=(SuperMutant const& other);
	virtual ~SuperMutant(void);
	virtual void takeDamage(int damage);
};

#	endif
