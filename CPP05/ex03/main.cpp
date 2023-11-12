#include "Intern.hpp"

int main()
{
    //ShrubberyCreationForm	Shrub("\x1b[33mShrub\x1b[33m");
	Bureaucrat	Mica("Mica Hilson", 145);
	Bureaucrat	Brian("Brian Ellison", 137);
	Intern	intern;
	Form	*f;

	// std::cout << Mica << std::endl;
    // std::cout << Brian << std::endl;
	// Brian.executeForm(Shrub);
	// Mica.signForm(Shrub);
	// Mica.executeForm(Shrub);
	// Brian.executeForm(Shrub);
	// std::cout << Shrub << std::endl << std::endl;

	f = intern.makeForm("shrubbery creation", "28C");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("robotomy request", "28B");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("presidential pardon", "28A");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("undefined", "0U");

	return (0);
}