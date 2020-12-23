/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:14:07 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:14:08 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FORM_HPP
#	define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp" 

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gToSign;
		const int			_gToExecute;
	
	public:		
		//Compliance

		Form(std::string name = "Default Form", int gTS = 150, int gTE = 150);
		Form(Form const& other);
		~Form(void);
		Form& operator=(Form const& other);

		//Functions
		std::string getName(void) const;
		bool		getIfSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(Bureaucrat const& bct);

		//EXCEPTIONS
		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const& other);
			~GradeTooHighException(void)throw();
			const char *what(void) const throw();
			GradeTooHighException& operator=(GradeTooHighException const& other);
		};

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const& other);
			GradeTooLowException& operator=(GradeTooLowException const& other);
			const char *what(void) const throw();
			~GradeTooLowException(void) throw();
		};

};

std::ostream& operator<<(std::ostream& flux, Form const& other);

#	endif
