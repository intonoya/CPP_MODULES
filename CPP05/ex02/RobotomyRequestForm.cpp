#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
	Form("RobotomyRequestForm", 72, 45), _target(copy._target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if(this != &copy)
		this->_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout << "DRRRRRRR " << _target << " has been robotomized " << (rand() % 2 ? "successfully" : "failed") << std::endl;
}
