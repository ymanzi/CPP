#include "Form.hpp"


Form::Form(std::string name, int gTS, int gTE): _name(name), _signed(false), _gToSign(gTS), _gToExecute(gTE)
{
	if (_gToExecute > 150 || _gToSign > 150)
		throw Form::GradeTooLowException();
	else if (_gToExecute < 1 || _gToSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const& other): _name(other._name), _signed(other._signed), _gToSign(other._gToSign), _gToExecute(other._gToExecute)
{
}

Form::~Form(void){}

Form& Form::operator=(Form const& other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getIfSigned(void) const
{
	return (_signed);
}

int Form::getGradeToSign(void) const
{
	return (_gToSign);
}

int Form::getGradeToExecute(void) const
{
	return(_gToExecute);
}

void Form::beSigned(Bureaucrat const& bct)
{
	if (bct.getGrade() <= this->_gToSign)
	{
		_signed = true;
		bct.signForm(true, *this);
	}
	else
	{
		bct.signForm(false, *this);
		throw Form::GradeTooLowException();
	}
	
}

std::ostream& operator<<(std::ostream& flux, Form const& other)
{
	std::cout << "<" << other.getName() << "> Form is signed:" << other.getIfSigned()
	<< " grade to sign:" << other.getGradeToSign() << " - to Execute:" 
	<< other.getGradeToExecute() << std::endl;
	return (flux);
}


// EXCEPTIOOONNNNN

// EXCEPTION

typedef Form::GradeTooLowException GTLE;
typedef Form::GradeTooHighException GTHE;

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
	return ("Grade is too small");
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
	return ("The grade is too high");
}