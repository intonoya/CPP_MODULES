#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
        std::string		_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    
		void	execute(const Bureaucrat &executor) const;
};

#endif