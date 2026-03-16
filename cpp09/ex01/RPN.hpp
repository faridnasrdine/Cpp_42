#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <map>
#include <sstream>
#include <stdexcept>

class RPN
{
    private:
        RPN();
        RPN(const RPN &other);
        RPN& operator=(const RPN &other);
        ~RPN();
    
    public:
        static void calc(const std::string& str);
        static bool parsing_input(const std::string& input);
        class InvalidExpressionException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Error: Invalid expression.";
                }
        };
};



#endif