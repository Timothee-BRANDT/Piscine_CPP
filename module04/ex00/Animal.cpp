#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Constructor Called" << std::endl;
    return ;
}

Animal::Animal(Animal const &rhs) {
    *this = rhs;
    std::cout << "Animal Copy Constructor Called" << std::endl;
    return ;
}

Animal::~Animal(void) {
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType(void) const {
    return type;
}

Animal &Animal::operator=(Animal const &rhs) {
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "animal noise" << std::endl;
}