/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:37 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:38 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ROBOTOMYREQUESTFORM_HPP
#	define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target = "Default Target");
	RobotomyRequestForm(RobotomyRequestForm const& other);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif
