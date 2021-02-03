/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:33 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:34 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PRESIDENTIALPARDONFORM_HPP
#	define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target = "Default Target");
	PresidentialPardonForm(PresidentialPardonForm const& other);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm& operator=(PresidentialPardonForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif
