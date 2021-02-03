/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:29 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:30 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef INTERN_HPP
#	define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
public:
	Intern(void);
	Intern(Intern const& );
	~Intern(void);
	Intern& operator=(Intern const& );

	Form* makeForm(std::string const& f, std::string const& t);
};

struct List
{
	std::string		name;
	Form 			*(*fct)(std::string);
};

#	endif
