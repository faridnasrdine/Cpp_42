#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::PmergeMe(const PmergeMe &other){
    _vector = other._vector;
    _deque = other._deque;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
    {
        _vector = other._vector;
        _deque = other._deque;  
    }
    return *this;
}
PmergeMe::~PmergeMe(){

}

void PmergeMe::parse_input(char **av)
{
    for(size_t i = 1; av[i]; i++)
    {
        std::stringstream s(av[i]);
        int n;
        char c;

        if(!(s >> n) || (s >> c) || n < 0)
            throw std::runtime_error("Error");

        _vector.push_back(n);
        _deque.push_back(n);
    }
}
std::vector<int>& PmergeMe::getVector()
{
    return _vector;
}
void PmergeMe::beforeSort()
{
    std::cout << "Before: ";
    for(size_t i = 0; i < _vector.size(); i++)
    {
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;
}
bool pairCompare(const std::pair<int,int> &a, const std::pair<int,int> &b)
{
    return a.first < b.first;
}

void PmergeMe::Vector_Sort()
{
    if (_vector.size() <= 1)
        return;

    int last = 0;
    bool hasLast = false;

    if (_vector.size() % 2 != 0)
    {
        last = _vector.back();
        _vector.pop_back();
        hasLast = true;
    }

    std::vector<std::pair<int,int> > pairs;

    for (size_t i = 0; i < _vector.size(); i += 2)
    {
        int a = _vector[i];
        int b = _vector[i + 1];

        if (a > b)
            pairs.push_back(std::make_pair(a,b));
        else
            pairs.push_back(std::make_pair(b,a));
    }
   
    std::sort(pairs.begin(), pairs.end(), pairCompare);


    std::vector<int> mainChain;
    std::vector<int> pend;

    for (size_t i = 0; i < pairs.size(); i++)
    {
        mainChain.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
    }

    for (size_t i = 0; i < pend.size(); i++)
    {
        std::vector<int>::iterator pos;

        pos = std::lower_bound(mainChain.begin(), mainChain.end(), pend[i]);
        mainChain.insert(pos, pend[i]);
    }

    if (hasLast)
    {
        std::vector<int>::iterator pos;

        pos = std::lower_bound(mainChain.begin(), mainChain.end(), last);
        mainChain.insert(pos, last);
    }

    _vector = mainChain;
}
void PmergeMe::afterSort()
{
    std::cout << "After: ";
    for (size_t i = 0; i < _vector.size(); i++)
    {
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;
}

