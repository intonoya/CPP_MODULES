#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

class RPN
{
    public:
        RPN(void);
        RPN(const RPN& other);
        RPN&    operator=(const RPN& other);
        ~RPN(void);

        void    checkAndCalculate(std::string expression);
        static void _run(const std::string &run);
    
    private:
        std::stack<double> _stack;
};

#endif