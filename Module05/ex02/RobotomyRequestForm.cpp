/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:05 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:06 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

typedef RobotomyRequestForm RRF; 

RRF::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target)
{
}

RRF::RobotomyRequestForm(RobotomyRequestForm const& other): Form(other)
{
}

RRF::~RobotomyRequestForm(void)
{}

RobotomyRequestForm& RRF::operator=(RobotomyRequestForm const& other)
{
	Form::operator=(other);
	return (*this);
}

void RRF::execute(Bureaucrat const & executor) const
{
	if (this->verifExecute(executor))
	{
		int r = std::rand() % 2;
		if (r)
		{
			std::cout << "SssssKKKKkkkkkRRRRRrrrrrrrr..... <" <<this->getTarget()
			<< "> has been robotomized successfully!" << std::endl;
		}
		else
		{
			std::cout << "SSssssKKKkkkRRRrrr.... Unfortunitely the Robotomy of <" << this->getTarget()
			<< "> didn't succeed!" << std::endl;
		}		
	}
}
