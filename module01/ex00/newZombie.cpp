#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *ptr = new (std::nothrow) Zombie(name);
    if (ptr == nullptr)
        return (NULL);
    return (ptr);
}
