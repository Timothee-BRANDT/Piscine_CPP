#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
    *this = rhs;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    return;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal noise" << std::endl;
}