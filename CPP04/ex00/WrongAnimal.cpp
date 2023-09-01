#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << " WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    this->type = type;
    std::cout << " WrongAnimal constructor with parameter called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << " WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	if(this != &copy)
        this->type = copy.type;
	return (*this);
}

const std::string &WrongAnimal::getType() const
{
    return(this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << " Wrong animal sound" << std::endl;
}