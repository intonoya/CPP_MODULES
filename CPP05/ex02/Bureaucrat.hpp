#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
        Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            public: 
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public: 
                const char *what() const throw();
        };
    public:
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat &operator=(const Bureaucrat &copy);

        const std::string   &getName() const;
        int                 getGrade() const;
        void                increment();
        void                decrement();
        void                signForm(Form &form) const;
		void				executeForm(const Form &form);
};

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &b);

#endif