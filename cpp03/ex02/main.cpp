#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    
    ClapTrap a("Farid");

    ScavTrap b("Robot");

    FragTrap c("Fraggy");

    a.attack("target dummy");
    b.attack("bad robot");
    c.attack("evil boss");

    b.guardGate();
    c.highFivesGuys();

    c.takeDamage(50);
    c.beRepaired(20);

    return 0;
}

