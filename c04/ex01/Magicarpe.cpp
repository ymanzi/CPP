/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Magicarpe.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:07:05 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:07:06 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Magicarpe.hpp"

Magicarpe::Magicarpe(void): Enemy(1, "Magicarpe")
{
	std::cout << "* TrEMPettE ON *" << std::endl;
}

Magicarpe::Magicarpe(Magicarpe const& other): Enemy(other)
{
	std::cout << "* TrEMPettE ON *" << std::endl;
}

Magicarpe& Magicarpe::operator=(Magicarpe const& other)
{
	if (this != &other)
		Enemy::operator=(other);
	return (*this);
}

Magicarpe::~Magicarpe(void)
{
	std::cout << "* TRemPeTTe OFF *" << std::endl;
}
