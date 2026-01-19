#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Intern intern;

        AForm* f1 = intern.makeForm("shrubbery creation", "home");
        AForm* f2 = intern.makeForm("robotomy request", "Bender");

        boss.signForm(*f1);
        boss.executeForm(*f1);

        boss.signForm(*f2);
        boss.executeForm(*f2);

        delete f1;
        delete f2;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
