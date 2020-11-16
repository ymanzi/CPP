
#	ifndef INTERN_HPP
#	define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
public:
	Intern(void);
	Intern(Intern const& );
	~Intern(void);
	Intern& operator=(Intern const& );
	Form* makeForm(std::string const& f, std::string const& t);
};

struct List
{
	std::string name;
	Form *(*fct)(std::string);
};


#	endif