#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Farid");
    ClapTrap b("Robot");

    a.attack("Robot");
    b.takeDamage(2);

    b.attack("Farid");
    a.takeDamage(3);

    a.beRepaired(5);
    return 0;
}
