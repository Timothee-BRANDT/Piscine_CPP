#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor Called" << std::endl;
    type = "Dog";
    return;
}

Dog::Dog(Dog const &rhs)
{
    this->type = rhs.type;
    std::cout << "Dog Copy Constructor Called" << std::endl;
    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "dog noise" << std::endl;
}
