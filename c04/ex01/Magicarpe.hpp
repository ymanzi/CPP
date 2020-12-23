/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Magicarpe.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:06 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:07 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MAGICARPE_HPP
#	define MAGICARPE_HPP

#include "Enemy.hpp"

class Magicarpe: public Enemy
{
public:
	Magicarpe(void);
	Magicarpe(Magicarpe const& other);
	Magicarpe& operator=(Magicarpe const& other);
	virtual ~Magicarpe(void);
};

#	endif
