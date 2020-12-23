/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Robot.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:06:07 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:06:08 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Robot.hpp"

Robot::Robot(std::string name): Victim(name)
{
	std::cout << "KrKrrrrKRrrrrZiiiiii" << std::endl;
}

Robot::Robot(Robot const& other): Victim(other)
{
	std::cout << "Amazing Robot copied !!" << std::endl;
}

Robot::~Robot(void)
{
	std::cout << "Biiiiiiiiiiippppppppp" << std::endl;
}

Robot& Robot::operator=(Robot const& other)
{
	if (this != &other)
		_name = other._name;
	return (*this);
}

void Robot::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a Cl4p-Tr4p!" << std::endl;
}
