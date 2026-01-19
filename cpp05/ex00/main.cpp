#include "Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat a("Farid", 2);
        std::cout << a << std::endl;

        a.incrementGrade();
        std::cout << a << std::endl;

        a.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
