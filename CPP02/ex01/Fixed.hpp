#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _value;
        static const int    _fractional_bits = 8;
    public:
        Fixed();
        Fixed(const int intNum);
        Fixed(const float floatNum);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();
    
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif