#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
	Form("PresidentialPardonForm", 25, 5), _target(copy._target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if(this != &copy)
		this->_target = copy._target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
