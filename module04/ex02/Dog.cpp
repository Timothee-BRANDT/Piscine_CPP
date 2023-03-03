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
    std::cout << "Dog Copy Constructor Called" << std::endl;
    type = rhs.type;
    brain = new Brain();
    *brain = *rhs.brain;
    return;
}

Dog &Dog::operator=(Dog const &rhs)
{
    Animal::operator=(rhs);
    delete brain;
    brain = new Brain();
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
