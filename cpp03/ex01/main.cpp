#include "ScavTrap.hpp"

int main()
{
    ScavTrap b("Robot");

    // b.attack("Attack");
    // b.guardGate();

    // b.takeDamage(30);
    // b.beRepaired(20);

    for (size_t i = 0; i < 50; i++)
    {
        std::cout << i << std::endl;
        b.attack("Monster");
        b.beRepaired(1);
    }
    
    return 0;
}
