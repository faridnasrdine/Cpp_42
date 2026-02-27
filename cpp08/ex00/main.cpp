#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 20);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(v, 99);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
