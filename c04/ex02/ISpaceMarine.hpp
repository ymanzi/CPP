/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:12 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:14 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ISPACEMARINE_HPP
#	define ISPACEMARINE_HPP

#include <string>
#include <iostream>

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine *clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#	endif
