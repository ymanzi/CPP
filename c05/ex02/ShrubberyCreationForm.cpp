/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:15 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:16 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

typedef ShrubberyCreationForm SCF; 

SCF::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{
}

SCF::ShrubberyCreationForm(ShrubberyCreationForm const& other): Form(other)
{
}

SCF::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm& SCF::operator=(ShrubberyCreationForm const& other)
{
	Form::operator=(other);
	return (*this);
}

void SCF::execute(Bureaucrat const & executor) const
{
	if (this->verifExecute(executor))
	{
		std::string nameFile = this->getTarget();
		nameFile += "_shrubbery";

		std::ofstream fileFlux(nameFile.c_str());
		if (fileFlux)
		{
			fileFlux << "      /\\      " << std::endl; 
			fileFlux << "     /\\*\\     " << std::endl; 
			fileFlux << "    /\\O\\*\\    " << std::endl; 
			fileFlux << "   /*/\\/\\/\\   " << std::endl; 
			fileFlux << "  /\\O\\/\\*\\/\\  " << std::endl; 
			fileFlux << " /\\*\\/\\*\\/\\/\\ " << std::endl; 
			fileFlux << "/\\O\\/\\/*/\\/O/\\" << std::endl; 
			fileFlux << "      ||      " << std::endl; 
			fileFlux << "      ||      " << std::endl; 
			fileFlux << "      ||      " << std::endl; 
		}
	}
}
