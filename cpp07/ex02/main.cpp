#include "Array.hpp"

int main()
{
    Array<int> empty;
    std::cout << "Empty size: " << empty.size() << std::endl;

    Array<int> a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    std::cout << "a elements: ";
    for (unsigned int i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    Array<int> b(a);
    b[0] = 99;

    std::cout << "a[0]: " << a[0] << std::endl; 
    std::cout << "b[0]: " << b[0] << std::endl;

    Array<int> c;
    c = a;
    c[1] = 77;

    std::cout << "a[1]: " << a[1] << std::endl;
    std::cout << "c[1]: " << c[1] << std::endl;

    try {
        std::cout << a[10] << std::endl;
    } catch (std::exception& e) {
        std::cout << "Index out of bounds exception caught" << std::endl;
    }

    return 0;
}
