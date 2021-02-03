/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:46 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:51:47 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _perimetre(36), _masse(3), _vitesse(2)
{
	std::cout << "B+" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "B-" << std::endl;
}

void Brain::show(void) const
{
	std::cout << "brain carac: " << _perimetre << _masse << _vitesse << std::endl;
}


Brain *Brain::identify(void)
{
	return (this);
}
