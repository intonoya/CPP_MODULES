#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
		void	check_executor(const Bureaucrat &executor) const;
    private:
        std::string         _name;
        bool                _isSigned;
        const int           _signedGrade;
        const int           _execGrade;
        class GradeTooHighException : public std::exception
        {
            public: 
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            private:
				const char	*_msg;
			public:
				GradeTooLowException();
				GradeTooLowException(const char *_msg);
				virtual const char *what() const throw();
        };
        class	InvalidFormException : public std::exception
		{			
			public:
				virtual const char *what() const throw();
		};
    public:
        Form();
        virtual ~Form();
        Form(const Form &copy);
        Form(const std::string &name, int signedGrade, int execGrade);
        Form &operator=(const Form &copy);

        const std::string   &getName() const;
        bool                isSigned() const;
        int                 getSignedGrade() const;
        int                 getExecGrade() const;
        void                beSigned(const Bureaucrat &bur);
		virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &obj, const Form &b);

#endif