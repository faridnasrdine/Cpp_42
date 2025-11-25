#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
 : ClapTrap("default_scav")
{
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
}

DiamondTrap::DiamondTrap(const std::string& N)
    : ClapTrap(N), FragTrap(N), ScavTrap(N), name(N)
{
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
    std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &o)
    :ClapTrap(o), FragTrap(o), ScavTrap(o)
{
    std::cout << "DiamondTrap copy constructor called for " << this->name << std::endl;
    *this = o;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &a)
{
    if(this != &a)
    {
        ClapTrap::operator=(a);
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    if (energypoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name
                  << " cannot attack, no energy points left!" << std::endl;
        return;
    }
    if (hitpoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name
                  << " cannot attack, no hit points left!" << std::endl;
        return;
    }
    energypoints--;
    std::cout << "DiamondTrap " << this->name << " attacks " << target
              << ", causing " << attackdamage << " points of damage!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap's name is " << this->name << " and ClapTrap's name is " << ClapTrap::name << '\n';

}
