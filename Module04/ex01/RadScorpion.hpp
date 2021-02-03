/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:08:22 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:08:23 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef RADSCORPION_HPP
#	define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const& other);
	RadScorpion& operator=(RadScorpion const& other);
	virtual ~RadScorpion(void);
};

#	endif
