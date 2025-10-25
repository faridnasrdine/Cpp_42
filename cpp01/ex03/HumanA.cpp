#include "HumanA.hpp"


void HumanA::attack()
{
    std::cout << this->name <<  " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& str, Weapon& weapon) : weapon(weapon)
{
    this->name = str;
}
