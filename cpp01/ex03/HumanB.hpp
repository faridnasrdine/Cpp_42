#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB();
    HumanB(const std::string str);

    void attack();
    void setWeapon(Weapon& weapon);
};



#endif