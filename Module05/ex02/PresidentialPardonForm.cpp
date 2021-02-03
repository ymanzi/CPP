/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:02 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:03 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

typedef PresidentialPardonForm PPF; 

PPF::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
}

PPF::PresidentialPardonForm(PresidentialPardonForm const& other): Form(other)
{
}

PPF::~PresidentialPardonForm(void)
{}

PresidentialPardonForm& PPF::operator=(PresidentialPardonForm const& other)
{
	Form::operator=(other);
	return (*this);
}

void PPF::execute(Bureaucrat const & executor) const
{
	if (this->verifExecute(executor))
	{
		std::cout << "<" << this->getTarget() << ">  has been pardoned by Zafod Beeblebrox!" << std::endl;	
	}
}
