/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:14:14 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:14:16 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat yv("Yv");
	Bureaucrat yv2(yv);

try
{
	Bureaucrat("YVES", -254);
	yv.addGrade();
}
catch (std::exception const& e)
{
	std::cerr << "ERREUR : " << e.what() << std::endl;
}
try
{
	Bureaucrat("YVES", 254);
}
catch (std::exception const& e)
{
	std::cerr << "ERREUR : " << e.what() << std::endl;
}

	yv2.addGrade();
	std::cout << yv2;
	std::cout << yv;
	try
	{	
		yv.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERREUR : " << e.what() << '\n';
	}
	
	std::cout << yv;
	return (0);
}
