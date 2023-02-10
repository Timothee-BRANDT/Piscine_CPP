#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(WrongCat const &src);
    ~WrongCat(void);
    void makeSound(void) const;

private:
    WrongCat &operator=(WrongCat const &rhs);
};