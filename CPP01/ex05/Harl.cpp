#include "Harl.hpp"

Harl::Harl(void)
{
    Harl::Function[0] = &Harl::debug;
    Harl::Function[1] = &Harl::info;
    Harl::Function[2] = &Harl::warning;
    Harl::Function[3] = &Harl::error;
}

Harl::~Harl(void) {}

void    Harl:: debug(void)
{
    std::cout << "\x1b[31m\nDEBUG level: \x1b[31m";
    std::cout << "\x1b[36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\x1b[36m\n";
}

void    Harl:: info(void)
{
    std::cout << "\x1b[31m\nINFO level: \x1b[31m";
    std::cout << "\x1b[36mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\x1b[36m\n";
}

void    Harl::warning(void)
{
    std::cout << "\x1b[31m\nWARNING level: \x1b[31m";
    std::cout << "\x1b[36mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\x1b[36m\n";
}

void    Harl::error(void)
{
    std::cout << "\x1b[31m\nERROR level: \x1b[31m";
    std::cout << "\x1b[36mThis is unacceptable! I want to speak to the manager now.\x1b[36m\n";
}

void Harl::complain(std::string level)
{
    std::string array[] = {"debug", "info", "warning", "error"};
    for(int i = 0; i < 4; i++)
    {
        if (!array[i].compare(level))
        {
            (this->*Function[i])();
            break;
        }
    }
}