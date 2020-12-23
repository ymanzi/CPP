/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:11:57 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:11:58 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

typedef PresidentialPardonForm PPF; 

PPF::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 72, 45, target)
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
