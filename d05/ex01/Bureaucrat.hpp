#	ifndef BUREAUCRAT_HPP
#	define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	protected:
		const std::string	_name;
		int 		_grade;

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

		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const& other);
		~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat const& other);
		const std::string getName(void) const;
		int	getGrade(void) const;
		void setGrade(int grade);
		void addGrade(void);
		void decGrade(void);
		void signForm(bool bl, Form& fm) const;
};

std::ostream& operator<<(std::ostream& flux, Bureaucrat const& other);

#	endif