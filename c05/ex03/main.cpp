/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:13 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:12:14 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	test_bureaucrat(void)
{
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	std::cout << " * Set grade" << std::endl;
	b.setGrade(100);
	std::cout << b << std::endl;

	std::cout << " * Too low grade" << std::endl;
	try 
	{
		Bureaucrat bLow("Alice", 420);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << " * Too High grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", -20);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_form(Bureaucrat b, Form &form)
{
	std::cout << form;
	std::cout << " ** Can't Be Executed because not Signed ** " << std::endl;
	try
	{
		form.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	b.setGrade(1);
	form.beSigned(b);
	b.setGrade(150);
	std::cout << " ** Can't Be Executed because grade is Too Low ** " << std::endl;
	try
	{
		form.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	b.setGrade(1);
	std::cout << " ** Executed ** " << std::endl;
	form.execute(b);
}

void	test_intern(void)
{
	{
		std::cout << "** Robotomy Request **" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		std::cout << "** Shrubbery Creation **" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	{
		std::cout << "** Presidential Pardon **" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	{
		std::cout << "** Unknown **" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("unknown", "Bender");
		delete rrf;
	}
}

int main(void)
{
	Bureaucrat				b("Ouioui");
	RobotomyRequestForm 	r_form;
	PresidentialPardonForm 	p_form;
	ShrubberyCreationForm 	s_form;

	std::cout << "============== INTERN ==========" << std::endl;
	test_intern();

	std::cout << std::endl << "========== BUREAUCRAT ==========" << std::endl;
	test_bureaucrat();

	std::cout << std::endl << "============== SHRUBBERY FORM ==========" << std::endl;
	test_form(b, s_form);

	std::cout << std::endl << "============== ROBOTOMY FORM ==========" << std::endl;
	test_form(b, r_form);

	std::cout << std::endl << "============== PRESIDENTIAL FORM ==========" << std::endl;
	test_form(b, p_form);
}
