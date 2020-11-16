
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

		Form(std::string name, int gTS, int gTE);
		Form(Form const& other);
		~Form(void);
		Form& operator=(Form const& other);

		std::string getName(void) const;
		bool		getIfSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(Bureaucrat const& bct);

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gToSign;
		const int			_gToExecute;

};

std::ostream& operator<<(std::ostream& flux, Form const& other);

#	endif