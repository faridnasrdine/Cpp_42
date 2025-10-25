#include "HumanB.hpp"

HumanB::HumanB() {}

void HumanB::attack()
{
    std::cout << this->name <<  " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string str)
{
    this->name = str;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}