#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string   _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        void	execute(const Bureaucrat &executor) const;
};

#endif