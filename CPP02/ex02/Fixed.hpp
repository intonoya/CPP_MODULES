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
        ~Fixed();
        Fixed(const int intNum);
        Fixed(const float floatNum);
        Fixed(const Fixed &copy);
    
        Fixed &operator=(const Fixed &copy);
    
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
    
        int     toInt(void) const;
        float   toFloat(void) const;

        bool operator>(const Fixed &t) const;
        bool operator<(const Fixed &t) const;
        bool operator>=(const Fixed &t) const;
        bool operator<=(const Fixed &t) const;
        bool operator==(const Fixed &t) const;
        bool operator!=(const Fixed &t) const;

        Fixed operator+(const Fixed &t) const;
        Fixed operator-(const Fixed &t) const;
        Fixed operator*(const Fixed &t) const;
        Fixed operator/(const Fixed &t) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        static Fixed &max(Fixed &n1, Fixed &n2);
        static Fixed &min(Fixed &n1, Fixed &n2);
        static const Fixed &max(const Fixed &n1, const Fixed &n2);
        static const Fixed &min(const Fixed &n1, const Fixed &n2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif