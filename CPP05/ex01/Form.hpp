#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signedGrade;
        const int           _execGrade;
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
        Form();
    public:
        ~Form();
        Form(const Form &copy);
        Form(const std::string &name, int signedGrade, int execGrade);
        Form &operator=(const Form &copy);

        const std::string   &getName() const;
        bool                isSigned() const;
        int                 getSignedGrade() const;
        int                 getExecGrade() const;
        void                beSigned(const Bureaucrat &bur);
};

std::ostream &operator<<(std::ostream &obj, const Form &b);

#endif