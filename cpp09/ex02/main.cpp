#include "PmergeMe.hpp"
#include <ctime>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    try
    {
        PmergeMe p;

        p.parse_input(av);

        p.beforeSort();

        clock_t startVec = clock();
        p.Vector_Sort();
        clock_t endVec = clock();

        p.afterSort();

   


        double vecTime = (double)(endVec - startVec) / CLOCKS_PER_SEC * 1000000;

        std::cout << "Time to process a range of "
                  << p.getVector().size()
                  << " elements with std::vector : "
                  << vecTime << " us" << std::endl;

    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
