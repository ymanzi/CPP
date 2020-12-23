/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Robot.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:39 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:40 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ROBOT_HPP
#   define ROBOT_HPP

#include "Victim.hpp"

class Robot : public Victim
{
	public:
		Robot(std::string name = "R2d2");
		Robot(Robot const& other);
		virtual ~Robot(void);
		Robot& operator=(Robot const& other);
		virtual void getPolymorphed(void) const;
};

#   endif
