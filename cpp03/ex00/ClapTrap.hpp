#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap
{
private:
    std::string name;
    int hitpoints;
    int energypoints;
    int attackdamage;
public:
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap &o);
    ClapTrap& operator=(const ClapTrap &a);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif