#include "DiamondTrap.hpp"


int main()
{
    // DiamondTrap a("Farid");

    // a.attack("target dummy");
    // a.takeDamage(100);
    // a.beRepaired(20);

    DiamondTrap *b = new DiamondTrap("Farid");
    ClapTrap *c = new DiamondTrap("p");

    b->attack("Farid");
    b->takeDamage(100);
    b->beRepaired(20);
    c->attack("pw");
    delete b;
    delete c;

    return 0;
}
