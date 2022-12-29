#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Destructor called" << std::endl;
}

void    Zombie::annonce(void) const {
    std::cout << "BraiiiiiiinnnzzzZ..." << this->name << std::endl;
}