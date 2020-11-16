#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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
	try {
		Bureaucrat bLow("Alice", 20);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

std::cout << "========== shrubbery ==========" << std::endl;

	RobotomyRequestForm s("Yves");
	std::cout << s;
	 
	try{
	 s.execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	s.beSigned(b);
	s.execute(b);
}