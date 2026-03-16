#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    if(!RPN::parsing_input(av[1]))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    try
    {
        RPN::calc(av[1]);
    }
    catch(const RPN::InvalidExpressionException& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}


