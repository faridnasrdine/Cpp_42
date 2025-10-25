#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(const std::string str);

    std::string getType() const;
    void setType(std::string new_type);
};


#endif
