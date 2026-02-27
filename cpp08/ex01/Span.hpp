#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int _maxIntegers;
    std::vector<int> _numbers;
public:
    Span();
    Span(const Span &other);
    Span& operator=(const Span &other);
    Span(unsigned int N);
    ~Span();

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};




#endif