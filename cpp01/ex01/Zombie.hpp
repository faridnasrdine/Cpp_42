#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie();
    void setZombie(std::string name);
    ~Zombie();
    void announce();

private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP