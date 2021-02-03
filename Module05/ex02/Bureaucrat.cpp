/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:50 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:51 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other): _name(other._name), _grade(other._grade)
{}
Bureaucrat::~Bureaucrat(void){}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other)
{
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

void Bureaucrat::addGrade(void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decGrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(bool bl, Form& fm) const
{
	if (bl)
	{
		std::cout << "<" << _name << "> signs <" << fm.getName() << ">" << std::endl;
	}
	else
	{
		std::cout << "<" << _name << "> cannot sign <" << fm.getName() << "> because ";
	}
	
}

void Bureaucrat::executeForm(Form const& form) const
{
	if (this->_grade <= form.getGradeToExecute())
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	else
	{
		try 
		{
			form.execute(*this);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

std::ostream& operator<<(std::ostream& flux, Bureaucrat const& other)
{
	std::cout << other.getName() << " bureaucrat grade " << other.getGrade() << std::endl;
	return (flux);
}


// EXCEPTION

typedef Bureaucrat::GradeTooLowException GTLE;
typedef Bureaucrat::GradeTooHighException GTHE;

GTLE::GradeTooLowException(void){}
GTLE::GradeTooLowException(GTLE const& other)
{
	(void)other;
}
GTLE& GTLE::operator=(GTLE const& other)
{
	(void)other;
	return (*this);
}
GTLE::~GradeTooLowException(void)throw()
{}

const char *GTLE::what(void) const throw()
{
	return ("The grade is bigger than 150");
}



GTHE::GradeTooHighException(void){}
GTHE::GradeTooHighException(GradeTooHighException const& other)
{
	(void)other;
}
GTHE& GTHE::operator=(GradeTooHighException const& other)
{
	(void)other;
	return (*this);
}
GTHE::~GradeTooHighException(void)throw()
{}

const char *GTHE::what(void) const throw()
{
	return ("The grade is lower than 1");
}
