#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
 : ClapTrap("default_scav")
{
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
    std::cout << "ScavTrap " << this->name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &o)
    :ClapTrap(o)
{
    std::cout << "ScavTrap copy constructor called for " << this->name << std::endl;
    *this = o;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &a)
{
    if(this != &a)
    {
        ClapTrap::operator=(a);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energypoints <= 0)
    {
        std::cout << "ScavTrap " << this->name
                  << " cannot attack, no energy points left!" << std::endl;
        return;
    }
    if (hitpoints <= 0)
    {
        std::cout << "ScavTrap " << this->name
                  << " cannot attack, no hit points left!" << std::endl;
        return;
    }
    energypoints--;
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << attackdamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " Gate keeper mode " << std::endl;
}