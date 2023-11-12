#include "RPN.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout<<"\33[1;31mError: less than 1 argument!\33[1;31m"<<std::endl;
        return 1;
    }
    RPN obj;
    obj.checkAndCalculate(argv[1]);
    return 0;
}