#include "DiamondTrap.hpp"


int main()
{
    
    ;

    DiamondTrap* p = new DiamondTrap ("Farid");
    p->attack("target dummy");

    p->whoAmI();

    delete p;
    return 0;
}

