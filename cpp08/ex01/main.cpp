#include "Span.hpp"
int main()
{
    Span big(10000);
    
    for(int i = 0; i < 10000; i++)
        big.addNumber(rand());
    std::cout << big.shortestSpan() << std::endl;
    std::cout << big.longestSpan() << std::endl;
}
