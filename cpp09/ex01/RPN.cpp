#include "RPN.hpp"

RPN::RPN(){

}

RPN::RPN(const RPN &other){
    (void)other;
}

RPN& RPN::operator=(const RPN &other){
    (void)other;
    return *this;
}
RPN::~RPN(){

}

static bool isOperator(char c)
{
    return (c == '+' || c== '-' || c == '*' || c == '/');
      
}
bool RPN::parsing_input(const std::string& input)
{
    std::stringstream ss(input);
    std::string token;
    while (ss >> token)
    {
        if(token.size() == 1 && isdigit(token[0]))
            continue;
        else if(token.size() == 1 && isOperator(token[0]))
            continue;
        else
            return false; 
    }
    return true;
}
double performOperation(char c, std::stack<double>& nums)
{
    if (nums.size() < 2)
        throw std::runtime_error("Error");
    double b = nums.top();
    nums.pop();
    double a = nums.top();
    nums.pop();
    switch(c)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if(b == 0)
                throw std::runtime_error("Error: Division by zero.");
            return a / b;
        default:
            throw std::runtime_error("Error: Invalid operator.");
    }
}
void RPN::calc(const std::string& str)
{
    std::stack<double> nums;

    for(size_t i = 0; i < str.length(); i++)
    {
        if(isspace(str[i]))
            continue;
        else if(isdigit(str[i]))
            nums.push(str[i] - '0');
        else if(isOperator(str[i]))
        {
            double result = performOperation(str[i], nums);
            nums.push(result);

        }
        else
            std::cerr << "Error" << std::endl;
    
    }
    if (nums.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return;
    }
    std::cout << nums.top() << std::endl;
}