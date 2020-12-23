/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:41 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:44 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SHRUBBERYCREATIONFORM_HPP
#	define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target = "Default Target");
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif
