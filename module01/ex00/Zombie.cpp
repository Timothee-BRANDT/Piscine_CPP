#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    std::cout << "Zombie named: " << name << " has been created by the constructor" << std::endl;
    this->name = name;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie named: " << this->name << " has been destroyed by the destructor" << std::endl;
}

void    Zombie::annonce(void) const {
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}