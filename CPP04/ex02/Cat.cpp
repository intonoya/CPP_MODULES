#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "\x1b[32m Cat constructor called \x1b[32m" << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    this->_brain = new Brain();
    *this->_brain = *copy._brain;
    std::cout << "\x1b[32m Cat copy constructor called \x1b[32m" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	if(this != &copy)
        *this->_brain = *copy._brain;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "\x1b[32m Cat destructor called \x1b[32m" << std::endl;
    delete _brain;
}

void    Cat::makeSound() const
{
    std::cout << "\x1b[32m meow \x1b[32m" << std::endl;
}