#include "FragTrap.hpp"

FragTrap::FragTrap()
 : ClapTrap("default_frag")
{
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    hitpoints = 100;
    energypoints = 100;
    attackdamage = 30;
    std::cout << "FragTrap " << this->name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &o)
    :ClapTrap(o)
{
    std::cout << "FragTrap copy constructor called for " << this->name << std::endl;
    *this = o;
}

FragTrap& FragTrap::operator=(const FragTrap &a)
{
    if(this != &a)
    {
        ClapTrap::operator=(a);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a positive high five! " << std::endl;
}