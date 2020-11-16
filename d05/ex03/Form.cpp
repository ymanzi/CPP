#include "Form.hpp"


Form::Form(std::string name, int gTS, int gTE, std::string target): _name(name), _signed(false), _gToSign(gTS)
	, _gToExecute(gTE), _target(target)
{
	if (_gToExecute > 150 || _gToSign > 150)
		throw Form::GradeTooLowException();
	else if (_gToExecute < 1 || _gToSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const& other): _name(other._name), _signed(other._signed)
, _gToSign(other._gToSign), _gToExecute(other._gToExecute), _target(other._target)
{
}

Form::~Form(void){}

Form& Form::operator=(Form const& other)
{
	if (this != &other)
	{
		_signed = other._signed;
		_target = other._target;
	}
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
		throw Form::ExecuteException();
	}
	
}

std::string	Form::getTarget(void) const
{
	return (_target);
}

bool Form::verifExecute(Bureaucrat const& exec) const
{
	if (!this->getIfSigned())
		throw Form::SignedException();
	else if (exec.getGrade() > this->getGradeToExecute())
		throw Form::ExecuteException();
	return (true);
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
typedef Form::ExecuteException EE;
typedef Form::SignedException SE;


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

EE::ExecuteException(void){}
EE::ExecuteException(ExecuteException const& other)
{
	(void)other;
}
EE& EE::operator=(ExecuteException const& other)
{
	(void)other;
	return (*this);
}
EE::~ExecuteException(void)throw()
{}

const char *EE::what(void) const throw()
{
	return ("The form cannot be executed or signed because the Bureaucrat's level is not enough");
}

SE::SignedException(void){}
SE::SignedException(SignedException const& other)
{
	(void)other;
}
SE& SE::operator=(SignedException const& other)
{
	(void)other;
	return (*this);
}
SE::~SignedException(void)throw()
{}

const char *SE::what(void) const throw()
{
	return ("The form cannot be executed because it's not signed");
}

