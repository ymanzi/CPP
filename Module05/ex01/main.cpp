/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:13:58 by ymanzi            #+#    #+#             */
/*   Updated: 2020/12/19 12:14:00 by ymanzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "========== BUREAUCRAT ==========" << std::endl;
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
	std::cout << "============== FORM: GradeToSign TooLow ==========" << std::endl;
	try
	{
		Form form("Basic", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "============== FORM: GradeToExecute TooHigh ==========" << std::endl;
	try
	{
		Form form("Basic", 110, -5);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "============== FORM: Signed by Bureaucrate ==========" << std::endl;
	Form	h_form("Basic Form");
	Form	l_form("Presidential Form", 1, 1);

	std::cout << h_form;
	h_form.beSigned(b);
	std::cout << h_form;
	std::cout << "============== FORM: Can't be Signed by Bureaucrate ==========" << std::endl;
	std::cout << l_form;
	try
	{
		l_form.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
