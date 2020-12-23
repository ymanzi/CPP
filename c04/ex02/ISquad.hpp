/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:09:18 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:09:20 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ISQUAD_HPP
#	define ISQUAD_HPP

#include <string>
#include <iostream>
//#include "ISpaceMarine.hpp"
class ISpaceMarine;

class ISquad
{
public:
	virtual ~ISquad(){}
	virtual int getCount() const = 0;
	virtual ISpaceMarine *getUnit(int) const = 0;
	virtual int push(ISpaceMarine *) = 0;
};

#	endif
