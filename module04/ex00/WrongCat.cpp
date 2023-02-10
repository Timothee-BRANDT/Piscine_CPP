#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Constructor Called" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
    this->type = rhs.type;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    return;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat noise" << std::endl;
}
