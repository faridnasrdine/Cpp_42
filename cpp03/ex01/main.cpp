#include "ScavTrap.hpp"

int main()
{
    ScavTrap b("Robot");

    b.attack("Attack");
    b.guardGate();

    b.takeDamage(30);
    b.beRepaired(20);
    
    return 0;
}
