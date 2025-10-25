#include "Zombie.hpp"

Zombie::Zombie()
{
}
void Zombie::setZombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}
void Zombie::announce()
{
    std::cout << "Zombie " << this->name << ": Braiiiiiiinnnssss..." << std::endl;
}
