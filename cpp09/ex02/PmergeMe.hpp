#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>
#include <sstream>

class PmergeMe
{
private:
        std::vector<int> _vector;
        std::deque<int> _deque;
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void parse_input(char **av);
    void beforeSort();
    void Vector_Sort();
    void afterSort();
    std::vector<int>& getVector() ;
};

#endif