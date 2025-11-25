#include "ScavTrap.hpp"

int main()
{
    ScavTrap b("Robot");
    ClapTrap* w = new ScavTrap(b);

    w->attack("bad robot");

    b.guardGate();

    b.takeDamage(30);
    b.beRepaired(20);
    delete w;
    return 0;
}
