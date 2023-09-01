#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\x1b[31m Brain constructor called \x1b[31m" << std::endl;
}

Brain::~Brain()
{
    std::cout << "\x1b[31m Brain destructor called \x1b[31m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "\x1b[31m Brain copy constructor called \x1b[31m" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    if(this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}