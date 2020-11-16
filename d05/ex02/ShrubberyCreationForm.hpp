
#	ifndef SHRUBBERYCREATIONFORM_HPP
#	define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif