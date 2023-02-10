#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);
    void makeSound(void) const;

    private:
    Dog &operator=(Dog const &rhs);
};
