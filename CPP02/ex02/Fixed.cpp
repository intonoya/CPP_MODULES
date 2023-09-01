#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed(const int intNum)
{
    this->_value = intNum << _fractional_bits;
}

Fixed::Fixed(const float floatNum)
{
    this->_value = roundf(floatNum * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return (this->_value);
}

void Fixed::setRawBits(const int raw)
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

Fixed &Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        this->setRawBits(copy.getRawBits());
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &t) const
{
    return (this->toFloat() > t.toFloat());
}

bool Fixed::operator<(const Fixed &t) const
{
    return (this->toFloat() < t.toFloat());
}

bool Fixed::operator>=(const Fixed &t) const
{
    return (this->toFloat() >= t.toFloat());
}

bool Fixed::operator<=(const Fixed &t) const
{
    return (this->toFloat() <= t.toFloat());
}

bool Fixed::operator==(const Fixed &t) const
{
    return (this->toFloat() == t.toFloat());
}

bool Fixed::operator!=(const Fixed &t) const
{
    return (this->toFloat() != t.toFloat());
}

Fixed	Fixed::operator+(const Fixed &t) const
{
	Fixed	sum;

	sum.setRawBits(this->getRawBits() + t.getRawBits());
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &t) const
{
	Fixed	diff;

	diff.setRawBits(this->getRawBits() - t.getRawBits());
	return (diff);
}

Fixed	Fixed::operator*(const Fixed &t) const
{
	Fixed	mul;

	mul.setRawBits((this->getRawBits() * t.getRawBits()) >> this->_fractional_bits);
	return (mul);
}

Fixed	Fixed::operator/(const Fixed &t) const
{
	if (t.getRawBits() == 0)
		throw std::logic_error("Division by zero");
	return (Fixed(this->toFloat() / t.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (copy);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (copy);
}

Fixed   &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
}

Fixed   &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1 < n2)
        return (n1);
    return (n2);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1 < n2)
        return (n1);
    return (n2);
}