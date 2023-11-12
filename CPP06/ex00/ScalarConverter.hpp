#ifndef SCALAR_CONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <string.h>
#include <ctype.h>
#include <bits/basic_string.h>

class   ScalarConverter
{
    public:
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter(const std::string &name, int grade);
        ScalarConverter &operator=(const ScalarConverter &copy);
};

#endif