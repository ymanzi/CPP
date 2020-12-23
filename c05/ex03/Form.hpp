/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:23 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:26 by ymanzi           ###   ########.fr       */
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
	public:
		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const& other);
			virtual ~GradeTooHighException(void)throw();
			virtual const char *what(void) const throw();
			GradeTooHighException& operator=(GradeTooHighException const& other);
		};

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const& other);
			GradeTooLowException& operator=(GradeTooLowException const& other);
			virtual const char *what(void) const throw();
			virtual ~GradeTooLowException(void) throw();
		};

		class ExecuteException : public std::exception
		{
		public:
			ExecuteException(void);
			ExecuteException(ExecuteException const& other);
			ExecuteException& operator=(ExecuteException const& other);
			virtual const char *what(void) const throw();
			virtual ~ExecuteException(void) throw();
		};

		class SignedException : public std::exception
		{
		public:
			SignedException(void);
			SignedException(SignedException const& other);
			SignedException& operator=(SignedException const& other);
			virtual const char *what(void) const throw();
			virtual ~SignedException(void) throw();
		};

		Form(std::string name, int gTS, int gTE, std::string target);
		Form(Form const& other);
		virtual ~Form(void);
		Form& operator=(Form const& other);

		std::string getName(void) const;
		bool		getIfSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		std::string	getTarget(void) const;
		void		beSigned(Bureaucrat const& bct);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		bool		verifExecute(Bureaucrat const& exec) const;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gToSign;
		const int			_gToExecute;
		std::string			_target;

};

std::ostream& operator<<(std::ostream& flux, Form const& other);

#	endif
