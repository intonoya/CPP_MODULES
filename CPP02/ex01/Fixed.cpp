#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "\x1b[35mDefault constructor called\x1b[35m" << std::endl;
}

Fixed::Fixed(const int intNum)
{
    std::cout << "\x1b[35mInt constructor called\x1b[35m" << std::endl;
    this->_value = intNum << _fractional_bits;
}

Fixed::Fixed(const float floatNum)
{
    std::cout << "\x1b[35mFloat constructor called\x1b[35m" << std::endl;
    this->_value = roundf(floatNum * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "\x1b[35mCopy constructor called\x1b[35m" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "\x1b[35mCopy assignment operator called\x1b[35m" << std::endl;
    if (this != &copy)
        this->setRawBits(copy.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "\x1b[35mDestructor called\x1b[35m" << std::endl;
}

int Fixed::getRawBits() const
{
    //std::cout << "\x1b[35mgetRawBits member function called\x1b[35m" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int Fixed::toInt(void) const
{
    return ((_value >> _fractional_bits));
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}