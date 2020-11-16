#	ifndef ROBOTOMYREQUESTFORM_HPP
#	define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& other);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& other);
	virtual void execute(Bureaucrat const & executor) const;
};

#	endif