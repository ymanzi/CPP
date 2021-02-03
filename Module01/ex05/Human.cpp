/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:51:59 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/16 19:52:00 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "H+" << std::endl;
}

Human::~Human(void)
{
	std::cout << "H-" << std::endl;
}

Brain *Human::identify(void)
{
	return (_brain.identify());
}

Brain &Human::getBrain(void)
{
	return (_brain);
}
