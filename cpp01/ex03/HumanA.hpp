#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
     Weapon &weapon;
    std::string name;
public:

    HumanA(const std::string& str, Weapon& weapon);

    void attack();
};




#endif