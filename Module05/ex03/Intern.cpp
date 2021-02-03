/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:11:54 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:11:55 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(Intern const &) {}
Intern::~Intern(void) {}
Intern &Intern::operator=(Intern const &) 
{
	return (*this);
}

Form *RobotomyRequestFormFct(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *ShrubberyCreationFormFct(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *PresidentialPardonFormFct(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string const &f, std::string const &t)
{
	List rqst[3];

	rqst[0].name = "robotomy request";
	rqst[0].fct = &RobotomyRequestFormFct;
	rqst[1].name = "shrubbery creation";
	rqst[1].fct = &ShrubberyCreationFormFct;
	rqst[2].name = "presidential pardon";
	rqst[2].fct = &PresidentialPardonFormFct;

	for (int i = 0; i < 3; i++)
	{
		if (f == rqst[i].name)
		{
			std::cout << "Intern creates " << rqst[i].name << " form" << std::endl;
			return (rqst[i].fct(t));
		}
	}
	std::cout << "Intern couldn't create the form because it's unknown" << std::endl;
	return (0);
}
