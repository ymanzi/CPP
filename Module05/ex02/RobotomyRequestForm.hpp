/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:36 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:37 by ymanzi           ###   ########.fr       */
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
