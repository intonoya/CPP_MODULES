#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixed_point;
    static const int _fractional_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    int getRawBits(void) const;
    void setRawBits( int const raw);
};

#endif