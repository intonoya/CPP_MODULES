#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    private:
        std::string   _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

        void	execute(const Bureaucrat &executor) const;
};

#endif