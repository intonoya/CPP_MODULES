#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form("ShrubberyCreationForm", 145, 137), _target(other._target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if(this != &copy)
		_target = copy._target;
	return (*this);
}

void  ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream out;
    std::string filename;

    filename = _target + "_shrubbery";
    this->check_executor(executor);
    out.open(filename);

    out << "              ,@@@@@@@,                 " << std::endl;
    out << "      ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl;
    out << "   ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o    " << std::endl;
    out << "  ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'   " << std::endl;
    out << "  %&&%&%&/%&&%@@/@@/ /@@@88888/88888'   " << std::endl;
    out << "  %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'    " << std::endl;
    out << "  `&%'\' ` /%&'    |.|       '\''|8'      " << std::endl;
    out << "      |o|        | |         | |        " << std::endl;
    out << "      |.|        | |         | |        " << std::endl;
    out << "   \\/ ._'\'//_/__/  ,'\'_//__\\/. '\'_//__/_" << std::endl;
    out.close();
}