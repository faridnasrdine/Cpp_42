#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap &o);
    ScavTrap& operator=(const ScavTrap &a);
    virtual ~ScavTrap();
    virtual void attack(const std::string& target);
    void guardGate();
};


#endif