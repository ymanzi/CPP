#include "Intern.hpp"

int main(void)
{
	{
		std::cout << "========== Robotomy Request ==========" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		std::cout << "========== Shrubbery Creation ==========" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	{
		std::cout << "========== Presidential Pardon ==========" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	{
		std::cout << "========== Unknown ==========" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("unknown", "Bender");
		delete rrf;
	}

	return (0);
}