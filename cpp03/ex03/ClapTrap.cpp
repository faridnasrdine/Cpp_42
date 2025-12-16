#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " Created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name) , hitpoints(10), energypoints(10), attackdamage(0)
{
    std::cout << "ClapTrap " << this->name << " created!" <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o)
{
    *this = o;
    std::cout << "ClapTrap copy constructor called for " << this->name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &a)
{
    if(this != &a)
    {
        this->name = a.name;
        this->hitpoints = a.hitpoints;
        this->energypoints = a.energypoints;
        this->attackdamage = a.attackdamage;
    }

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energypoints <= 0)
    {
        std::cout << "ClapTrap " << this->name
                  << " cannot attack, no energy points left!" << std::endl;
        return;
    }
    if (hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->name
                  << " cannot attack, no hit points left!" << std::endl;
        return;
    }
    energypoints--;
    std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitpoints -= amount;
    if (hitpoints < 0)
        hitpoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! (HP = " << hitpoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energypoints <= 0)
    {
        std::cout << "ClapTrap " << this->name
                  << " cannot be repaired, no energy points left!" << std::endl;
        return;
    }
    if (hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->name
                  << " cannot be repaired, it has no hit points left!" << std::endl;
        return;
    }
    hitpoints += amount;
    energypoints--;
    std::cout << "ClapTrap " << name << " repairs itself for "
              << amount << " hit points! (HP = " << hitpoints << ")" << std::endl;
}
