#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor Called" << std::endl;
    type = "Dog";
    brain = new Brain();
    return;
}

Dog::Dog(Dog const &rhs)
{
    type = rhs.type;
    *brain = *rhs.brain;
    std::cout << "Dog Copy Constructor Called" << std::endl;
    return;
}

Dog &Dog::operator=(Dog const &rhs)
{
    *brain = *rhs.brain;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "dog noise" << std::endl;
}
