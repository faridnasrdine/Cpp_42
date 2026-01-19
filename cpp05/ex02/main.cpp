#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat mid("Mid", 50);

        ShrubberyCreationForm s("home");
        RobotomyRequestForm r("Bender");
        PresidentialPardonForm p("Arthur");

        mid.signForm(s);
        boss.executeForm(s);

        mid.signForm(r);
        boss.executeForm(r);

        boss.signForm(p);
        boss.executeForm(p);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
