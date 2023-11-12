#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return("\x1b[31mError: The grade is too high!\x1b[31m");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("\x1b[31mError: The grade is too low!\x1b[31m");
}

Form::Form() : _name(), _isSigned(false), _signedGrade(1), _execGrade(1) { }

Form::Form(const Form &copy) : _name(copy._name), _isSigned(copy._isSigned), 
_signedGrade(copy._signedGrade), _execGrade(copy._execGrade) {}

Form::Form(const std::string &name, int signedGrade, int execGrade) : _name(name),
_isSigned(false), _signedGrade(signedGrade), _execGrade(execGrade) 
{
    if (signedGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signedGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::~Form() {}

Form	&Form::operator=(const Form &copy)
{
	if(this != &copy)
        _isSigned = copy._isSigned;
	return (*this);
}

const std::string   &Form::getName() const
{
    return(this->_name);
}

int Form::getSignedGrade() const
{
    return(this->_signedGrade);
}

int Form::getExecGrade() const
{
    return(this->_execGrade);
}

bool Form::isSigned() const
{
    return(this->_isSigned);
}

std::ostream &operator<<(std::ostream &obj, const Form &b)
{
    obj << "\x1b[32mForm: " << b.getName() << std::endl;
    obj << "Signed: " << b.isSigned() << std::endl;
    obj << "Signed Grade: " << b.getSignedGrade() << std::endl;
    obj << "Executed Grade: " << b.getExecGrade() << std::endl;

    return(obj);
}

void    Form::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() <= _signedGrade)
        _isSigned = true;
    else
        throw GradeTooLowException();
}
