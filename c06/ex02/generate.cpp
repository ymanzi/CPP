/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:25:09 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/23 09:25:11 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"

Base	*generate(void)
{
	std::srand(time(0));
	int i = rand() % 3;

	if (i == 1)
		return (new A);
	else if (i == 2)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *p)
{
std::cout << "identify from pointer" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{

std::cout << "identify from reference" << std::endl;

	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast){}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e){}
}
