#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bob("mohssin", 50);
    Form a38("A38", 30, 15);

    std::cout << a38 << std::endl;
    bob.signForm(a38);

    Bureaucrat boss("farid", 1);
    boss.signForm(a38);

    std::cout << a38 << std::endl;
}

