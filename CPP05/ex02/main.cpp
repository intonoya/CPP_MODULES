#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm	Shrub("\x1b[33mShrub\x1b[33m");
	RobotomyRequestForm		Robot("\x1b[33mRobot\x1b[33m");
	PresidentialPardonForm	President("\x1b[33mPresident\x1b[33m");

	Bureaucrat				Nifnaf("\x1b[33mNifnaf\x1b[33m", 145);
	Bureaucrat				Nafnaf("\x1b[33mNafnaf\x1b[33m", 137);
	Bureaucrat				Nufnuf("\x1b[33mNufnuf\x1b[33m", 1);
    
	std::cout << Nifnaf << std::endl;
    std::cout << Nafnaf << std::endl;
    std::cout << Nufnuf << std::endl;

    std::cout << Shrub << std::endl;
	Nafnaf.executeForm(Shrub);
	Nifnaf.signForm(Shrub);
	Nifnaf.executeForm(Shrub);
	Nafnaf.executeForm(Shrub);
	std::cout << Shrub << std::endl << std::endl;

    std::cout << Robot << std::endl;
    Nafnaf.executeForm(Robot);
	Nufnuf.signForm(Robot);
	Nufnuf.executeForm(Robot);
	Nufnuf.executeForm(Robot);
	Nufnuf.executeForm(Robot);
	std::cout << Robot << std::endl << std::endl;

    std::cout << President << std::endl;
    Nufnuf.signForm(President);
	std::cout << President << std::endl;
    Nufnuf.executeForm(President);
}