#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "\x1b[32m Dog constructor called \x1b[32m" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal("Dog")
{
    *this = copy;
    std::cout << "\x1b[32m Dog copy constructor called \x1b[32m" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        this->_brain = new Brain();
        *(this->_brain) = *(copy._brain);
    }
	return (*this);
}

Dog::~Dog()
{
    std::cout << "\x1b[32m Dog destructor called \x1b[32m" << std::endl;
    delete _brain;
}

void    Dog::makeSound() const
{
    std::cout << "\x1b[32m bark \x1b[32m" << std::endl;
}