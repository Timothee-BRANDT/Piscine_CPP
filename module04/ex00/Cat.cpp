#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Constructor Called" << std::endl;
    type = "Cat";
    return ;
}

Cat::Cat(Cat const &rhs)
{
    this->type = rhs.type;
    std::cout << "Cat Copy Constructor Called" << std::endl;
    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "cat noise" << std::endl;
}
