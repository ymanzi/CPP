#	ifndef PRESIDENTIALPARDONFORM_HPP
#	define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& other);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm& operator=(PresidentialPardonForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif