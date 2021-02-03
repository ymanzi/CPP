/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:19 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:13:20 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

int main(void)
{
	Bureaucrat				b("Ouioui");
	RobotomyRequestForm 	r_form;
	PresidentialPardonForm 	p_form;
	ShrubberyCreationForm 	s_form;

	std::cout << "========== BUREAUCRAT ==========" << std::endl;
	test_bureaucrat();

	std::cout << std::endl << "============== SHRUBBERY FORM ==========" << std::endl;
	test_form(b, s_form);

	std::cout << std::endl << "============== ROBOTOMY FORM ==========" << std::endl;
	test_form(b, r_form);

	std::cout << std::endl << "============== PRESIDENTIAL FORM ==========" << std::endl;
	test_form(b, p_form);
}
