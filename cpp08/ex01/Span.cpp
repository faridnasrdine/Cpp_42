#include "Span.hpp"

Span::Span(): _maxIntegers(0) {

}

Span::Span(const Span &other){
    *this = other;
}

Span& Span::operator=(const Span &other)
{
    if(this != &other)
        _maxIntegers = other._maxIntegers;
    return *this;
}

Span::Span(unsigned int N) : _maxIntegers(N){
}

Span::~Span(){

}

void Span::addNumber(int num)
{
    if(_numbers.size() > _maxIntegers)
        throw std::runtime_error("Span is full");
    _numbers.push_back(num);
}
int Span::longestSpan()
{
    if(_numbers.size() < 2)
        throw std::runtime_error("not enough numbers");

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}

int Span::shortestSpan()
{
    if(_numbers.size() < 2)
        throw std::runtime_error("not enough numbers");
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());

    int shortest = tmp[1] - tmp[0];
    for(size_t i = 1; i < tmp.size(); i++)
    {
        int diff = tmp[i] - tmp[i - 1];
        if(diff < shortest)
            shortest = diff;
    }
    return shortest;
}