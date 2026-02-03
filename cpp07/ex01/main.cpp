#include <iostream>
#include <string>
#include "iter.hpp"

void addOne(int& x)
{
    x += 1;
}

template <typename T>
void printElem(const T& x)
{
    std::cout << x << " ";
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::size_t lenA = sizeof(a) / sizeof(a[0]);

    std::cout << "Before addOne: ";
    iter(a, lenA, printElem<int>);
    std::cout << "\n";

    iter(a, lenA, addOne);

    std::cout << "After addOne:  ";
    iter(a, lenA, printElem<int>);
    std::cout << "\n\n";

    std::string s[] = {"chaine1", "chaine2", "chaine3"};
    std::size_t lenS = sizeof(s) / sizeof(s[0]);

    std::cout << "Strings: ";
    iter(s, lenS, printElem<std::string>);
    std::cout << "\n\n";

    const int c[] = {10, 20, 30};
    std::size_t lenC = sizeof(c) / sizeof(c[0]);

    std::cout << "Const ints: ";
    iter(c, lenC, printElem<int>);
    std::cout << "\n";


    return 0;
}
