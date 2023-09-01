#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "\x1b[33mCopy assignment operator called\x1b[33m" << std::endl;
    if (this != &obj)
        this->_fixed_point = obj.getRawBits();
    return (*this);
}

Fixed::Fixed()
{
    _fixed_point = 0;
    std::cout << "\x1b[33mDefault constructor called\x1b[33m" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "\x1b[33mCopy constructor called\x1b[33m" << std::endl;
    (*this) = obj;
}

int Fixed::getRawBits( void ) const
{
    std::cout <<"\x1b[33mgetRawBits member function called\x1b[33m" << std::endl;
    return (this->_fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    _fixed_point = raw;
}

Fixed::~Fixed()
{
    std::cout << "\x1b[33mDestructor called\x1b[33m" << std::endl;
}
